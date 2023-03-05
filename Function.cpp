#include<iostream>
using namespace std;

void display(){ // Make a Function
    cout<<"This is a function"<<endl;
}

int add(int x, int y){ // Function for adding a two numbers
    int z;
    z = x+y;
    return z;
}

int main(){
    display();
    int a=10, b=10, c;
    c = add(a,b);
    cout<<"Some else "<<c<<endl;
}


