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
 //inser at tail
 void insertAtTail(Node* &tail,int d){
        //step 1:creat new node 
        Node* newnode = new Node(d);
        //step 2:add picle node ke tail ka next hh usse new node pr lga do
        tail->next=newnode;
        //step 3:shift tail from first node to new node
        tail = newnode;
}
 //for traversing
    void traverse(Node* &head){
        Node* temp = head;
        while(temp!= NULL){
            cout<<temp->data<<" ";
            temp = temp ->next;
        }
        cout<<endl;
    }
int main(){
    Node* first = new Node(3);
    Node* head = first; 
   
    Node* tail=first;
    insertAtTail(tail,5);
    insertAtTail(tail,7);
    insertAtTail(tail,9);
    insertAtTail(tail,11);
    traverse(head);
}