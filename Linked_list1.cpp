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

  //Destructor
   ~Node() {
    int value = this->data;
    // memory free
    if (this->next != NULL) {
        delete next;
        this->next = NULL;
    }
    cout << "memory is free for node with data " << value << endl;
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

void insertAtPosition(Node* &tail,Node* &head,int position,int d){
//insert at 1st position
  if(position==1){
    insertAtHead(head,d);
    return;
  }
  
  Node* temp=head;
  int count=1;

  while(count<position -1){
    temp=temp->next;
    count++;
  }

  //creating a node for d
  Node* nodeToInsert=new Node(d);

  nodeToInsert->next=temp->next;

  temp->next=nodeToInsert;

  //inserting at last position
  if(temp->next==NULL){
    insertAtTail(tail,d);
    return;
  }
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



//deletion operation
void deleteNode(int position,Node* & head){
  //deletion of the first node
  if(position==1){
    Node* temp=head;
    head=head->next;
    //memory free of start node
    temp->next=NULL;
    delete temp;
  }
  else{
    //deletion at any middle node or last node
    Node*curr=head;
    Node* prev=NULL;

    int count=1;
    while(count<position){
      prev=curr;
      curr=curr->next;
      count++; 
    }
   prev->next=curr->next;
   curr->next=NULL;
   delete curr;
  }
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


   insertAtPosition(tail,head,1,22);
   print(head);

   deleteNode(1,head);
   print(head);

   return 0;
}