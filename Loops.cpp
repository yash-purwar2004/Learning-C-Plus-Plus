//Check whether the given number is prime or not
#include <iostream>
using namespace std;
int main(){
    int n,i,mod;
    cout<<"Check whether the given number is prime or not"<<endl;
    cin>>n;
    for(i=2; i<n; i++){
        mod=n%i;
        if(mod==0){
            break;
        }
    }

    if(mod==0){
        cout<<"This is a Prime Number"<<endl;
    }

    else{
        cout<<"This is not a Prime Number"<<endl;
    }
}

// Using Loop for reverse the number
#include<iostream>
using namespace std;
int main(){
    int i,n,r;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    while(n>0){
        r=n%10;
        n=n/10;
    cout<<r<<endl;
    }
return 0;
}

// Check whether the number is armstrong number or not
#include<iostream>
using namespace std;
int main(){
    int sum,r,n,m;
    sum=0;
    cin>>n;
    m=n;
    while(n>0){
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
    }

    if(sum==m){
        cout<<"The given number is Armstrong Number"<<endl;
    }

    else{
        cout<<"The given number is not Armstrong Number"<<endl;
    }

    return 0;
}

// Reverse the number
#include<iostream>
using namespace std;
int main(){
    int rev=0,n,r;
    cin>>n;
    while(n>0){
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }

    cout<<rev;
}

// Find the GCD of two numbers
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    while(m!=n){
        if(m>n){
            m=m-n;
        }

        else if(n>m){
            n=n-m;
        }
    }

    cout<<"GCD of two number is"<<m;
}


//Code for find whether the number is Palindrome or not
#include<iostream>
using namespace std;
int main(){
    int rev=0,n,r,m;
    cin>>n;
    m=n;
    while(n>0){
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }

    cout<<rev;
    
    if(rev==m){
        cout<<"This is a Palindrome Number"<<endl;
    }

    else{
        cout<<"This is not a Palindrome Number"<<endl;
    }
} 
