#includ<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* top;
 
void push(int data){
    Node* temp = new Node();
    temp->next=top;
    size++;
    top=temp;
}

int isempty(){
    return top == null;
}

int peek(){
    if
}
