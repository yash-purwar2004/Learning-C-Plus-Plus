#include<iostream>
using namespace std;
class hero{
    //properties
    public:
    int health;
};

int main(){
    // creation of objects
    hero ramesh;

    cin>>ramesh.health;
    cout<<"Size of : "<<sizeof(ramesh)<<endl;
    cout<<"health is "<<ramesh.health<<endl;
    // we can access the health using dot operator
    return 0;
}
