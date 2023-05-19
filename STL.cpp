// Function template with single parameters
// #include<iostream>
// using namespace std;
//     template<class X>
//     X func(X a, X b){
//         return a;
//     }

// int main(){
//     cout<<func(10,5)<<endl;
//     cout<<func(0,58)<<endl;
//     cout<<func(1,56)<<endl;
//     cout<<func(10,25)<<endl;
// }

// Function template with multiple parameters
// #include<iostream>
// using namespace std;
//     template<class X, class Y>
//     void func(X a, Y b){
//         cout<<a<<b<<endl;
//     }

// int main(){
//     func(10,5);
//     return 0;
// }

// Pgm for Exception Handling
// #include<iostream>
// using namespace std;
// int main(){
//     try{
//         int age =15;
//         if(age>18){
//             cout<<"Access Granted"<<endl;
//         }       

//         else{
//             throw(age);
//         }
//     }
//     catch(int mynum)
//     {
//         cout<<"Access denied - you must atleat 18 year old"<<endl;
//         cout<<mynum<<endl;
//     }
    
// }



// #include<iostream>
// #include<list>
// using namespace std;
// int main(){
//     list<int>list1{12, 3, 45, 67};
//     list1.push_back(2);
//     for(auto i: list1){
//         cout<<i<<" ";
//     }

//     cout<<list1.size()<<endl;
// }


// #include<iostream>
// #include<array>
// using namespace std;
// int main(){
//     array<int,5>arr{{1,2,3,4,5}};
//     for(int i: arr){
//         cout<<i<<" ";
//     }
//     cout<<arr.empty()<<endl;
// }

// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<string>languages;
//     languages.push("C++");
//     languages.push("Java");
//     languages.push("Py");
//     cout<<languages.top()<<endl;
//     return 0;
// }

// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     map<int, string> student;
//     student[1]="Yash";
//     student[2]="Sanskriti";
//     for(int i=1; i<=student.size(); i++){
//         cout<<i<<student[i]<<endl;
//     }
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string>languages={"Python, Java, CPP"};
    vector<string>::iterator itr;
    for(itr = languages.begin(); itr!=languages.end(); itr++){
        cout<<*itr<<endl;
    }
}