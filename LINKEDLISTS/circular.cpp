#include<iostream>
using namespace std;


typedef struct ListNode {
struct ListNode *next;
int data;
} ListNode;

ListNode *reverseKGroup(ListNode *head, int k) {
if (k > 1) { // no need to test for `head != NULL`
int counter = 0;
ListNode **start = &head; // place where to store the head of the reversed fragment
ListNode *currentPtr = head; // pointer to the first node of the fragment
ListNode *fastPtr = head; // pointer to the node after the end of the fragment

while (fastPtr) {
fastPtr = fastPtr->next;
counter++;
if (counter == k) {
// k nodes between CurrentPtr and fastPtr: reverse the fragment
ListNode *lastPtr = currentPtr;
ListNode *prevPtr = fastPtr;
while (counter) {
ListNode *nextPtr = currentPtr->next;
currentPtr->next = prevPtr;
prevPtr = currentPtr;
currentPtr = nextPtr;
counter--;
}
*start = prevPtr;
start = &lastPtr->next;
}
}
}
return head;
}

void printList(const char *prefix, const ListNode *p, const char *suffix) {
while (p) {
printf("%s%d", prefix, p->data);
prefix = ", ";
p = p->next;
}
printf("%s", suffix);
}

ListNode *test(ListNode *list, int k) {
printf("reverseKGroup(%d): ", k);
list = reverseKGroup(list, k);
printList("", list, "\n");
return reverseKGroup(list, k); // undo k-reversal
}

int main() {
ListNode a[10], *list = a;
for (int i = 0; i < 10; i++) {
a[i].next = i + 1 < 10 ? &a[i + 1] : NULL;
a[i].data = i + 1;
}
for (int k = 0; k <= 11; k++) {
list = test(list, k);
}
return 0;
}




