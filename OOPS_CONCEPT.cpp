// #include<iostream>
// using namespace std;

// class Hero{
//     public:
//     int health;

//     private:
//     char level;

//     public:
//     char getlevel(){
//         return level;
//     }

//     void setlevel(char ch){
//         level = ch;
//     }
// };

// int main(){
//     Hero h1;
//     cout<<"Size:"<<sizeof(h1)<<endl;
//     h1.health = 70;
//     cout<<"Health is "<<h1.health<<endl;


//     h1.setlevel('A'); // Use of getter and setter for accessing private data members
//     cout<<"Level is "<<h1.getlevel()<<endl;
// }




// Dynamically Allocation of Class

#include<iostream>
using namespace std;

class Hero{
private:
    int health;

public:
    char level;

    int gethealth(){
        return health;
    }

    void sethealth(int h){
        health = h;
    }
};

int main(){
    Hero *b = new Hero;

    (*b).sethealth(30);
    cout<<"Health is "<<(*b).gethealth()<<endl;
}