#include<iostream>
#include<queue>
using namespace std;

int main(){

    //creation
    queue<int> q;

    //push
    q.push(10);
    cout<<q.front()<<endl;
    q.push(11);
    cout<<q.front()<<endl;
    q.push(12);
    cout<<q.back()<<endl;


    cout<<"size of queue "<<q.size()<<endl;

    q.pop();
    q.pop();
    q.pop();

    cout<<"size of queue "<<q.size();


}