#include<iostream>
using namespace std;

class Node{
    public:
    //data member
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data= d;
        this->next = NULL;
    }
};
void insertathead(Node* &head,int d){
          //cration of node
          Node* newNode=new Node(d);
          //connection
          newNode->next=head;
          //shift head;'
          head = newNode;
} 
void traverse(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp =temp->next;
    }
   cout<<endl;
}

Node* getMiddle(Node* head) {
    if(head == NULL) {
        cout << "LIST iS empty" << endl;
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL) {
        //2 step
         fast = fast -> next ->next;
         //1 step
         slow = slow -> next;
    }
    return slow;
}
bool iscircular(Node* & head){
    Node* temp=  head;
    while(temp!=NULL){
    if(temp-> next == head){
        return true; 
    }
    temp=temp->next;
    }
    return false;
}
Node* reverseInK(Node* &head, int k) {
    //empty list
    if(head == NULL)
    return NULL;

    Node* curr = head;
    Node* next = curr -> next;
    Node* prev = NULL;
    int count = 0;

    //Step 1: reverse first k nodes
    while(curr != NULL && count < k) {
        next = curr -> next;
        curr -> next = prev;

        prev = curr;
        curr = next; 
        count++;
    }

    //next pointer will be pointing at the head of the remaining list
    
    if(next != NULL){ //can comment this also
        //step2:recursion will get ans for remaining list
        Node* rem = reverseInK(next, k);
        //step3: connection list in step 1 and step 3
        head -> next = rem;
    }
        
    //step 4: return head of entire list
    return prev;
}
Node* rev(Node* head){
        
        if(head==NULL || head->next==NULL)
            return head;
            
        Node* curr=head;
        Node* prev=NULL;
        Node* nxt=NULL;
        
        while(curr!=NULL){
            nxt=curr->next;
            //curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        
        return prev;
    }
 bool isPalindrome(Node *head)
    {
        //Your code here
        if(head==NULL || head->next==NULL)
            return true;
            
        Node* slow=head;
        Node* fast=head;
        
        while(fast && fast->next && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        Node* newhead = slow->next;
        slow->next=NULL;
        newhead=rev(newhead);
        
        Node* temp1=head;
        Node* temp2=newhead;
        
        
        while(temp2!=NULL){
            if(temp1->data!=temp2->data)
                return false;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        
        
        return true;
    }
    
int main(){
    Node* first= new Node(1);
    Node* head = first;
    //Node* tail = first;
    //inserting at head of 1
    insertathead(head,2);
    insertathead(head,3);
    insertathead(head,3);
    insertathead(head,2);
    insertathead(head,1);
   
    //traverse(head);
/*
    Node* middle =  getMiddle(head);
    cout<<"middle is "<<middle->data<<endl;

    //to make curcular
   head->next =head;
   cout<<"circular or not "<<iscircular(head)<<endl;

    traverse(head);
    head = reverseInK(head, 3);
    traverse(head);

cout<<" palinrome or not "<<isPalindrome(head);
*/


        return 0;
}
