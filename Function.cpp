// #include<iostream>
// using namespace std;

// void display(){ // Make a Function
//     cout<<"This is a function"<<endl;
// }

// int add(int x, int y){ // Function for adding a two numbers
//     int z;
//     z = x+y;
//     return z;
// }

// int add(int x, int y, int z){ // Function Overloading
//     int w;
//     w = x+y+z;
//     return w;
// }

// int main(){
//     display();
//     int a=10, b=10, c, d;
//     c = add(a,b);
//     cout<<"Some else "<<c<<endl;

//     d = add(a,b,c);
//     cout<<d<<endl;
// }

#include<iostream>
using namespace std;
    
template<class T> // Function Template
T maxim(T a,T b)
    {
       return a+b;
    }
    
int main()
{
	cout<<maxim(12,14)<<endl;
	cout<<maxim(2.3,1.4)<<endl;
	cout<<maxim(2.3f,5.6f)<<endl;
	
	return 0;
	    
}
    
	 
