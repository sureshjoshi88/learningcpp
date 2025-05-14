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

// class book{
//     public:
//     string author;
//     string title;
//     int price;
   
//     void returns(){
//         cout<<author<<"\n"<<title<<"\n"<<price;
//     }
// };

// int main(){

//     book b;
//     b.author = "suresh";
//     b.title = "software";
//     b.price = 20000;


//     b.returns();
// }


// class Reactangle{
//     public:
  
//     void result(int length,int width){
//         cout<<length*width<<endl;
//     }
//     void result2(int length,int width){
//         cout<<2*(length+width);
//     }
// };
// int main(){
//     Reactangle value;
//     value.result(3,4);
//     value.result2(5,6);
// }


// class BankAccount{
// public:
// int accountNo = 16178824365208;
// string accountHolder = "suresh";
// int balnce = 1000;

// void deposite(int money){
//     balnce+=money;
// }
// void withdrow(int money){
//     if(balnce>=money){
//     balnce-=money;

//     }else{
//         cout<<"itne pese nhi h account me \n";
//     }
// }
// void totalBalnce(){
//     cout<<"Total balnce is = "<<balnce;
// }


// };


// int main(){
//     BankAccount acc;
//     acc.deposite(500);
//     acc.withdrow(200);
//     acc.totalBalnce();
// }


class Calcutator{
    public:
    int total;
    void add(int a,int b){
        total = a+b;
        cout<<total;
    }
    void subract(int a,int b){
        total = a-b;
        cout<<total;

    }
    void multiply(int a,int b){
        total = a*b;
        cout<<total;

    }
    void divide(int a,int b){
        total = a/b;
        cout<<total;

    }

};
int main(){
    Calcutator value;
    value.add(5,6);
    value.subract(10,3);
    value.multiply(5,6);
    value.divide(30,5);
}