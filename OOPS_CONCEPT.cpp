#include<iostream>
using namespace std;

class Hero{
    public:
    int health;

    private:
    char level;

    public:
    char getlevel(){
        return level;
    }

    void setlevel(char ch){
        level = ch;
    }
};

int main(){
    Hero h1;
    cout<<"Size:"<<sizeof(h1)<<endl;
    h1.health = 70;
    cout<<"Health is "<<h1.health<<endl;

    h1.setlevel('A');
    cout<<"Level is "<<h1.getlevel()<<endl;
}