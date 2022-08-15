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
    // distructor
    ~Node(){
        int val = this->data;
        if(next!=NULL){
            delete next;
            next=NULL;  
        }
        cout<<"memory free for data "<<val<<endl;

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
void insertathead(Node* &tail,Node* &head,int d){
    if(head==NULL){
        Node* temp =new Node(d);
        head=temp;
        tail=temp;

    }
    else{
        Node* temp=new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}
// insert at tail
void insertattail(Node* &tail,Node* &head,int d){
    if(tail==NULL){
        Node* temp= new Node(d);
        head=temp;
        tail=temp;
    }
    else{
         Node* temp=new Node(d);
         tail->next=temp;
         temp->prev=tail;
         tail=temp;
    }

     
}
// insert at position
void insertatposition(Node* &tail,Node* &head, int position,int d){
   // insert at head position
   if(position==1){
    insertathead(tail,head,d);
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
    insertattail(tail,head,d);
    return;
   }
   Node* nodetoinsert=new Node(d);
   nodetoinsert->next=temp->next;
   temp->next->prev= nodetoinsert;
   temp->next=nodetoinsert;
   nodetoinsert->prev=temp;


}

// deletion of linked list

void deleteNode(int position , Node* &head){
    // deletion for first position
    if(position ==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    // deleting any middle element in doubly linked list
    else{
        Node* curr=head;
        Node* prev=NULL;

    
        int cnt =1;
        while(cnt<position){
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    curr->prev=NULL;
    prev->next=curr->next;
    curr->next=NULL;

    delete curr;

    }

}

int main(){
    // if linked list is created with node 10
    //Node* node1=new Node(10);
    //Node* head=node1;
    //Node* tail=node1;

    // if linked list is empty
    Node* head=NULL;
    Node* tail=NULL;


    print(head);

    //cout<<getlength(head)<<endl;

    insertathead(tail,head,11);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;


    insertathead(tail,head,13);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;


    insertathead(tail,head,8);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;


    insertattail(tail,head,25);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;


    insertatposition(tail,head,2,100);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;


    insertatposition(tail,head,1,101);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

    
    insertatposition(tail,head,7,102);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

    deleteNode(7,head);
    print(head);
    
    return 0;
}






