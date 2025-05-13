#include <iostream>
using namespace std;

// class student{
//     public:
//     // int a;
//     // float b;
//     // student(){
//     //     a = 5;
//     //     b = 4.5;
//     // }
//     // student(int p ,float k){
//     //     a = p;

//     //     b = k;
//     // }
//     // int result(){
//     //     // cout<<"hello "<<a<<" "<<b;
//     //     return a;
//     // }
//     int a;
//     student(){
//         a = 2;
//     }
// };
// int main(){
// student s;
// student s2(s);
// cout<<s2.a;
// }



class children{
    public:
    int a;
    int b;
    children(int p,int q){
       a =p;
       b =q;    }
    int result(){
     cout<<a<<b;     
    }
    children(){
        a = 2;
    }
};
int main(){
    children c;
    children c2(c);
    cout<<c2.a;

    // c.result();
    // children.c2(c);


}
