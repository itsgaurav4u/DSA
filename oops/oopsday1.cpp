#include<bits/stdc++.h>
using namespace std;

class Hero{

    //properties

    // PUBLIC members are access inside as well as outside the class
    private:
    int health;
    public:
    char level;
     
    //PRIVATE members are only accessed inside the class only

    /*void print(){
        cout<<level<<endl;
    }*/

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level=ch;
    }


};

int main(){

    //creation of object

    Hero ramesh;
    ramesh.setHealth(70);
    cout<<"ramesh health is "<<ramesh.getHealth()<<endl;
     //use setter
    
    //ramesh.health =60;
    ramesh.level='A';

    //cout<<"size of ramesh is "<<sizeof(ramesh);

    //cout<<"health of ramesh is "<< ramesh.health<<endl;
    cout<<"level of ramesh is "<< ramesh.level<<endl;
}