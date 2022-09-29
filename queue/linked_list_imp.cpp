#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node * front =NULL;
struct node * rear = NULL;
struct node * temp;

void insert(){
    int val;
    cout<<"enter the value"<<endl;
    cin>>val;
    if(rear == NULL){
        rear = (struct node *)malloc(sizeof(struct node));
        rear->next=NULL;
        rear->data = val;
        front = rear;

    }
    else{
        temp = (struct node *)malloc(sizeof(struct node));
        rear->next =temp;
        temp->data =val;
        temp->next =NULL;
        rear=temp;
    }
}

void Delete(){
    temp = front;
    if(front == NULL){
    cout<<"queue is empty"<<endl;
    }
    else{
    if(temp->next!=NULL){
        temp =temp->next;
        cout<<"element which is deleted"<<front->data<<endl;
        free(front);
        front = temp;
    }
    else{
        cout<<"element which is deleted"<<front->data<<endl;
        free(front);
        front=NULL;
        rear=NULL;


    }
    }
}

void display(){
    temp=front;
    if(front ==NULL && rear == NULL){
    cout<<"queue is empty"<<endl;
    }
    while(temp!=NULL){ 
        cout<<temp->data<<endl;
        temp=temp->next;

    }
}

int main(){
    int ch;
    cout<<"1) insert element of queue"<<endl;
    cout<<"2) Delete element from queue"<<endl;
    cout<<"3) Display all the elements of queue"<<endl;
    cout<<"4) Exit"<<endl;
    do{
        cout<<"enter your choice"<<endl;
        cin>>ch;
        switch(ch){
            case 1: insert();
            break;
            case 2: Delete();
            break;
            case 3: display();
            break;
            case 4: cout<<"exit"<<endl;
            default: cout<<"enter valid input"<<endl;
        }
    }while(ch!=4);
    return 0;
}