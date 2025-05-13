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

// class children{
//     public:
//     int a;
//     int b;
//     children(int p,int q){
//        a =p;
//        b =q;    }
//     int result(){
//      cout<<a<<b;
//     }
//     children(){
//         a = 2;
//     }
// };
// int main(){
//     children c;
//     children c2(c);
//     cout<<c2.a;

//     // c.result();
//     // children.c2(c);

// }

// class student{
//     public:
//     string name;
//      int rollno ;
//      char greade;
//     student(){
//         name = "suresh";
//          rollno = 12345;
//          greade = 'a';
//     }
//     void result(){
//         cout<<name<<endl;
//         cout<<rollno<<endl;
//         cout<<greade<<endl;
//     }
// };

// int main(){
//     student c1;
//     c1.result();
// }

class book{
    public:
    string author;
    string title;
    int price;
   
    void returns(){
        cout<<author<<"\n"<<title<<"\n"<<price;
    }
};

int main(){
    book b;
    b.author = "suresh";
    b.title = "software";
    b.price = 20000;
    b.returns();
}