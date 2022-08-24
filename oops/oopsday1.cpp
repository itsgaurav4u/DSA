#include<bits/stdc++.h>
using namespace std;

class Hero{

    //properties

    // PUBLIC members are access inside as well as outside the class
    private:
    int health;
    public:
    char level;

    Hero(){
        cout<<"constructor called"<<endl;
    }

    //paramerterised constructor

    Hero(int health, char level){
        this->level=level;
        this ->health=health;
        //cout<<"this-> "<<this<<endl; 
    }


     
    //PRIVATE members are only accessed inside the class only

    void print(){
        cout<<"this->health "<<health<<endl;
        cout<<"this->level "<<level<<endl;
    }
  
    Hero(Hero &temp){
        this->health=temp.health;
        this->level=temp.level;
    }
    

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


    ~Hero(){
        cout<<"Distructor called"<<endl;

    }


};

int main(){


//static 

Hero a;

//Dynamic

Hero *b=new Hero();

delete(b); 



   /* Hero S(70,'C');
    S.print();


// copy constructor
    Hero R(S);
    R.print();*/

    
    /*Hero ramesh(10);

    cout<<"Address"<<&ramesh<<endl;

    Hero *h=new Hero();*/
    


    // Dynamic allocation

    /*Hero *b=new Hero;
    b->setLevel('A');
    b->setHealth(70);
    cout<<"level is "<<(*b).level<<endl;
    cout<<"health is "<<(*b).getHealth()<<endl;


    cout<<"level is "<<b->level<<endl;
    cout<<"health is "<<b->getHealth()<<endl;*/

    /*//creation of object
    // we are statcially allocating the mermory
    Hero ramesh;
    ramesh.setHealth(70);
    cout<<"ramesh health is "<<ramesh.getHealth()<<endl;
     //use setter
    
    //ramesh.health =60;
    ramesh.level='A';

    //cout<<"size of ramesh is "<<sizeof(ramesh);

    //cout<<"health of ramesh is "<< ramesh.health<<endl;
    cout<<"level of ramesh is "<< ramesh.level<<endl;*/
}