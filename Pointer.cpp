// Simple program for find address
// #include<iostream>
// using namespace std;
// int main(){
//     int y=10;
//     int *p;
//     p=&y;
//     cout<<y<<endl;
//     cout<<&y<<endl;
//     cout<<p<<endl;
//     cout<<&p<<endl;
//     cout<<*p<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cout<<"Enter number of elements"<<endl; 
//     cin>>size;
//     int a[size]; // This array is created inside the stack
//     cout<<sizeof a<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int *p=new int[20];
//     delete []p;
//     p=new int[40];
//     return 0;
// }


// Operations on pointer arithmetic


// #include<iostream>
// using namespace std;
// int main(){
//     int a[5]={2,3,4,5,6};
//     int *p, *q;
//     p=a;
//     q=&a[1];

//     cout<<*p<<endl;
//     cout<<*q<<endl;

//     p++;
//     cout<<*p<<endl;

//     p--;
//     cout<<*p<<endl;
// }