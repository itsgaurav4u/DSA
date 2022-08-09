#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //Constructor
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};
// getting length of linked list

int getlength(Node* head){
    int len = 00;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
// treversing a linked list
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;

}
// insert at head
void insertathead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
// insert at tail
void insertattail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;

     
}
// insert at position
void insertatposition(Node* &tail,Node* &head, int position,int d){
   // insert at head position
   if(position==1){
    insertathead(head,d);
    return;
   }
   Node* temp=head;
   int cnt=1;
   while(cnt<position-1){
    temp=temp->next;
    cnt++;
   }
 // insert at last position
   if(temp->next==NULL){
    insertattail(tail,d);
    return;
   }
   Node* nodetoinsert=new Node(d);
   nodetoinsert->next=temp->next;
   temp->next->prev= nodetoinsert;
   temp->next=nodetoinsert;
   nodetoinsert->prev=temp;


}

int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;

    print(head);

    cout<<getlength(head)<<endl;

    insertathead(head,11);
    insertathead(head,13);
    insertathead(head,8);
    insertattail(tail,25);
    insertatposition(tail,head,2,100);
    insertatposition(tail,head,1,101);
    insertatposition(tail,head,8,102);
    print(head);
    return 0;
}






