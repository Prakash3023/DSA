#include<iostream>
using namespace std;

//Node for creating linkedlist
class Node{
  public:
  int data;
  Node* next; 

//Function when new node is being created(Constructor )
// Node(int  value) : data(value), next(nullptr) {}
   Node(int data){
    this->data=data;
    this->next= NULL;
  }
};

//used reference to avoid creating and copy and use the same node 
void insertAtHead(Node* &head, int d){
    //new node create
    Node* temp= new Node(d);
    temp->next=head;
    head=temp; 
}


void insertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp; // Link the new node to the end of the list
    tail = temp;       // Update the tail pointer
}




//functionn to print a linkedlist
void print(Node* &head){
    Node* temp=head;
    
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl ;
}

int main(){

  //Created andew node
   Node* node1=new Node(10);
  // cout<<node1->data<<endl;
  // cout<<node1->next<<endl;

   //headd pointing it to node 1
   Node* head=node1;
   Node* tail=node1;
   print(head);

   insertAtTail(tail,12);

   print(head);
   
   insertAtTail(tail,15);
   print(head);

   return 0;
}