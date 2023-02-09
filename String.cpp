// Make a Simple program of string
// #include<iostream>
// using namespace std;
// int main(){
//     char A[]="Follow me";
//     string P="Hello";
//     cout<<A<<endl;
//     cout<<P<<endl;
// }

// difference between get and getline function
// #include<iostream>
// using namespace std;
// int main(){
//     char s[20];
//     char p[20];
//     cout<<"Enter your name"<<endl;
//     cin.get(s,20);
//     cout<<"Welcome"<<s<<endl;

//     cin.ignore();

//     cin.get(p,20);
//     cout<<"Welcome"<<p<<endl;
// }


// Using strlen function for finding the length of string

// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char s[20]="Hello";
//     cout<<strlen(s)<<endl;

//     char *str;
//     cin.get(str,100);
//     cout<<"Length is" <<strlen(str)<<endl;
// }

// Using strcat function for concatenate two string

// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char s[5]="Good";
//     char p[8]="Morning";
//     strcat(s,p);
//     cout<<s<<endl;

//     strncat(s,p,3);
//     cout<<s<<endl;
// }

// Using strcpy function for copy the string
// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char p[8]="Morning";
//     char s[10]="";
//     strcpy(s,p);
//     cout<<s<<endl;

//     strncpy(s,p,6);
//     cout<<s<<endl;
// }

// Code for finding substring
// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char s[20]="Programming";
//     char p[10]="gram";
//     cout<<strstr(s,p)<<endl;
// }

// Code for finding the characters in the string
// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char s[20]="Programming";
//     cout<<strchr(s,'r')<<endl;
//     cout<<strrchr(s,'r')<<endl;
// }

// Enter the number as a character in a string
// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char s1[20]="235";
//     char s2[10]="20.345";

//     long int x=strtol(s1,NULL,10);
//     float y=strtof(s2,NULL);

//     cout<<x+5<<endl<<y-10<<endl;
// }

// Code for tokenising the string
// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char s1[20]="x=23;y=34;z=56;";
//     char *token;
//     token=strtok(s1,"=;");
//     while(token!=NULL){
//         cout<<token<<endl;
//         token=strtok(NULL, "=;");
//     }

//     return 0;
// }



// Enter the string by using class and objects
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter the string"<<endl;
//     getline(cin,str);
//     cout<<str<<endl;
// }

// Functions of String

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter the String"<<endl;
//     getline(cin,str);
//     cout<<str.size()<<endl;
// }

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str={""};
    cout<<str.empty()<<endl;
}