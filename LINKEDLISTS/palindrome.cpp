/*1. Insertion point of LL
2. Flatten a LL
3. Merge 2 sorted LL
4. Remove duplicates
5. Add 1 to LL
6. Add 2 num using LL
7. Clone LL with random pointer
8. Reverse alternate K nodes
9. Palindromic partition
*/
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

    cout<<"check plaindrome or not "<<isPalindrome(head)<<endl;
}