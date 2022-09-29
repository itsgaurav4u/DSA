#include<iostream>

using namespace std;

int queue[100],n=100,front=0,rear=0;

void insert(){
    int val;
    if(rear==n)
    cout<<"queue overflow"<<endl;
    else
      cin>>val;
      queue[rear]=val;
      rear++;

}

void Delete(){
    if(front==rear)
    cout<<"queue is empty"<<endl;
    else
    cout<<"element of queue deleted "<<queue[front]<<endl;
    front++;
}

void display(){
    if(front ==rear)
    cout<<"queue is empty"<<endl;
    else 
    for(int i=front;i<rear;i++){
        cout<<queue[i]<<" "<<endl;
    }
}

int main(){
    int ch;

    cout<<"1) insert element of queue"<<endl;
    cout<<"2) delete element of queue"<<endl;
    cout<<"3) display element of queue"<<endl;
    cout<<"4) exit"<<endl;

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
            default: cout<<"invalid choice"<<endl;
        }
    }while(ch!=4);

    return 0;
    

    
    

}