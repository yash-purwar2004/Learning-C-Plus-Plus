// #include<iostream>
// using namespace std;

// class Hero{
//     public:
//     int health;

//     private:
//     char level;

//     public:
//     char getlevel(){
//         return level;
//     }

//     void setlevel(char ch){
//         level = ch;
//     }
// };

// int main(){
//     Hero h1;
//     cout<<"Size:"<<sizeof(h1)<<endl;
//     h1.health = 70;
//     cout<<"Health is "<<h1.health<<endl;


//     h1.setlevel('A'); // Use of getter and setter for accessing private data members
//     cout<<"Level is "<<h1.getlevel()<<endl;
// }




// Dynamically Allocation of Class

// #include<iostream>
// using namespace std;

// class yash{
// private:
//     int health;

// public:
//     char level;

//     int gethealth(){
//         return health;
//     }

//     void sethealth(int h){
//         health = h;
//     }
// };

// int main(){
//     yash *b = new yash;

//     b->sethealth(30);
//     cout<<"Health is "<<b->gethealth()<<endl;
// }







// // Constructor
// #include<iostream>
// using namespace std;
//  class hero{
//     public:
//     hero(){
//         cout<<"Constructor Called"<<endl;
//     }
//  };

// int main(){
//     hero ramesh; //Stattically

//     hero *h = new hero; // Dynamically
// }















// Parametrized Constructor
// #include<iostream>
// using namespace std;
// class hero{

// public:
// int health; //ramesh health

// hero(int health){ // Function input health
    
//     this -> health = health;
//     cout<<"this is "<<this<<endl;
// }
// };

// int main(){
//     hero ramesh(12);
//     cout<<"address of ramesh"<<&ramesh<<endl;
// }









// Copy Constructor
// #include<iostream>
// using namespace std;

//     class hero{
//         public:
//         hero(){
//             cout<<"Default Constructor called"<<endl;
//         }

//         int health;
//     };



// int main(){
//     hero suresh;
//     suresh.health = 70;
//     cout<<"Health is "<<suresh.health<<endl;

//     hero R(suresh); // Copy Constructor Called
//     cout<<"Health is "<<R.health<<endl;
// }




// Copy Constructor
#include<iostream>
using namespace std;

class hero{
    public:
        int health;
        char level;

        hero(int x, char y){
            health = x;
            level = y;
        }

        int gethealth(){
            return health;
        }

        char getlevel(){
            return level;
        }
};

int main(){
    hero ramesh(20,'B');
    hero suresh(50,'H');

    ramesh = suresh;

    cout<<"Health is "<<ramesh.health<<endl;




}







