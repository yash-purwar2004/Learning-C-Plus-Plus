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

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str={""};
//     cout<<str.empty()<<endl;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str={"Hello"};
//     str.append("World");
//     cout<<str<<endl;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str={"Hello"};
//     str.insert(3,"kk");
//     cout<<str<<endl;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str={"HelloMoto"};
//     cout<<str.find_first_of('o',5);
//     cout<<str.find_last_of("l");
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str={"HelloSanskriti"};
//     cout<<str.substr(5);
// }

// String Iterator
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str={"HelloWorld"};
//     string::reverse_iterator it;
//     // for(it=str.begin(); it!=str.end(); it++){
//     //     cout<<*it;
//     // }

//     for(it=str.rbegin(); it!=str.rend(); it++){
//         cout<<*it;
//     }
// }

// Practice Question
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str="WELCOME";
//     for(int i=0; str[i]!='\0'; i++){
//         if(str[i]>=65 && str[i]<=90){
//             str[i]=str[i]+32;
//         }
//     }
//     cout<<str<<endl;
//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="How are you Sanskriti";
    int vowels=0;
    int consonant=0;
    int space=0;

    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='A' || str[i]=='E'|| str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            vowels++;
        }

        else if(str[i]==' '){
            space++;
        }

        else{
            consonant++;
        }
    }

    cout<<vowels <<"Vowels"<<endl;
    cout<<consonant <<"Consonant"<<endl;
    cout<<space+1 <<"Words"<<endl;
}
