// Print a Array by using for loop
#include<iostream>
using namespace std;
int main(){
    int i;
    int arr[5]={2,3,4,5,6};
    for(i=0; i<5; i++){
        cout<<arr[i]<<endl;
    }
}

// Addition of elements of array using for each loop
#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,4,5,6};
    int sum=0;
    for(int x:arr){
        sum=sum+x;
    }
    cout<<sum<<endl;
}

//  Find the maximum elements in array
#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,4,8,1,5};
    int max=arr[0];
        for(int i=0; i<5; i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }

        cout<<max<<endl;
    }

// Code for taking input of the array elements and find the element uses its index
#include<iostream>
using namespace std;
int main(){
    int arr[10], n=10,i;
    for(i=0; i<10; i++){
        cin>>arr[i];
    }
    
    for(i=0; i<10; i++){
        cout<<arr[i];
    }

    int key;
    cout<<"\nEnter the key"<<endl;
    cin>>key;
    for(i=0;i<n;i++){
        if(key==arr[i]){
            cout<<"Key is found"<<endl;
        }
        return 0;
    }

}


// Code for finding the elements using binary search
#include<iostream>
using namespace std;
int main(){
    int l=0,h=9,mid,n;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"Enter the Key"<<endl;
    cin>>n;
    while (l<=h){
        mid=(l+h)/2;
        if(n==arr[mid]){
            cout<<"Key is Found"<<endl;
            return 0;
        }

        else if(n<arr[mid]){
			h=mid-l;
        }

		else{
			l=mid+l;
        }
    }

    cout<<"Key not found"<<endl;
    
}

// Print 2D Array by using nested loop
#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout<<"("<<i<<","<<j<<")";
        }
        cout<<endl;
    }
}

// Code for print a number pattern using nested loop
#include<iostream>
using namespace std;
int main(){
    int i,j,n=1, m=0;
    for(i=0; i<=3; i++){
        for(j=0; j<=3; j++){
            cout<<n++<<" ";
        }
    cout<<endl;

    }
}

// Code for print a different types of Pattern
#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=0; i<=3; i++){
        for(j=3; j>=0; j--){
            if(i>=j){
                cout<<"*";
            }

            else{
                cout<<" ";
            }
        }

        cout<<endl;
    }
}


// // Code for addition of two matrix
#include<iostream>
using namespace std;
int main(){
    int i,j;
    int arr1[3][3]={{1,2,3},{4,5,6}, {7,8,9}};
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    int arr2[3][3]={{1,2,3},{4,5,6}, {7,8,9}};
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

    int arr3[3][3];
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
}