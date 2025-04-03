#include <iostream>
using namespace std;
#include <typeinfo>
// int main(){
//    typedef typealias

// int x =8;
// typedef int abc;
// abc  z =9;

// using abc = string;

// int student  = 20;
// student+= 1;
// student%=3;
//student = student + 1
// cout<<student;

//arithemetic operations
// }

// // type conversion


// int main(){
//     int student = 20;
//     int total = student%=3;
//     cout<<total;
// }


// int main(){
//     // typedef int num;
//     // num x = 19;

//     using name = string;
// }

// int main(){
//     typedef int number;
//     number y = 20;
//     cout<<y;
// }

// int main(){
//     int x = 10;
//     double y = 5.55;
//     double total = x*y;
//     cout<<"total price = "<<total;
// }

// int main(){
//     int x = 10;
//     int y = 20;
//     int z = x+y;
//     cout<<z;

// }

// namespace first{
//     int num = 10;
// }
// int main(){
//     using namespace first;
//     cout<<num;
// }

// int main(){
//    const double p = 3.14;
//     double r  = 6;
//     double total = (p*r*r);
//     cout<<total;
// }

int main(){
    string name ;
    cout<<"Enter your name :-";
    getline(cin>>ws,name);
    cout<<"entr your job :-";
    string job;
    getline(cin>>ws,job);
    int age;
    cout<<"enter your age :-";
    cin>>age;
    cout<<"my name is "<<name<<" and job is "<<job<<" and age is "<<age;
}