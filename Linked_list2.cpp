//doubly linkedlist
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*prev;
    Node*next;

    //constructor
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};

//Traversing
 void print(Node* head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
 }

//Length of the linkedlist
int getLength(Node* head){
    int len=0;

Node* temp=head;

    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}


//Insert
void insertAtHead(Node* &head, int d){
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
 int main(){
    Node* node1=new Node(10);
    Node* head=node1;

    print(head);
    cout<<getLength(head)<<endl; 
   
   insertAtHead(head,11);
   print(head);

   insertAtHead(head,2);
   print(head);

   insertAtHead(head,87);
   print(head);
   return 0;
 }