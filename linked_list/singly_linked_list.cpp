//Creation of naode of a linklist
#include <iostream>
using namespace std;

class Node{

public:
int data;
Node* next;

//CONSTRUCTOR USE IN LINKLIST

Node(int data){
  this->data=data;
  this->next= NULL;
}

//DISTRUCTOR USE IN LINKLIST

~Node(){
  int value= this->data;
   // FOR FREEING THE MEMORY
  if(this->next!=NULL){
    delete next;
    this->next=NULL;
  }
  cout<<"memory is free with node with data"<<value<<endl;
}

};
void Insertathead(Node* &head,int d){
  // NEW NODE CREATE
  Node* temp = new Node(d);
  temp->next=head;
  head=temp;
  
}

void deleteNode(int position,Node* &head){
  if(position==1){
    Node* temp=head;
    head=head->next;
    temp->next=NULL;
    //memory free of node
    delete temp;
    }
  else{
    Node* current =head;
    Node* prev=NULL;

    int cnt =1;
    while(cnt<position){
      prev=current;
      current=current->next;
      cnt++;
    }
    prev->next=current->next;
    current->next=NULL;
    
  }
  
}

void print(Node* &head){
  Node* temp=head;

  while(temp != NULL){
    cout << temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
  
}

int main() {
  Node* node1 = new Node(10);
  //cout<<node1->data<<endl;
cout<<node1->next<<endl;

  // head pointed to node 1
  Node* head =node1;
  print(head);

  Insertathead(head,12);
  Insertathead(head,15);
  print(head);

  deleteNode(1,head);
  print(head);
  
}