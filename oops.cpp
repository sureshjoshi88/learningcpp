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

// class Calcutator{
//     public:
//     int total;
//     void add(int a,int b){
//         total = a+b;
//         cout<<total<<endl;
//     }
//     void subract(int a,int b){
//         total = a-b;
//         cout<<total<<endl;

//     }
//     void multiply(int a,int b){
//         total = a*b;
//         cout<<total<<endl;

//     }
//     void divide(int a,int b){
//         total = a/b;
//         cout<<total;
//     }
// };
// int main(){
//     Calcutator value;
//     value.add(5,6);
//     value.subract(10,3);
//     value.multiply(5,6);
//     value.divide(30,5);
// }

// class Movies{
//     public:
//     string title;
//     int year;
//     Movies(string s,int y){
//         title = s;
//         year = y;
//     }
//     void display(){
//         cout<<title<<", "<< year<<endl;
//     }

// };

// int main(){
//     Movies move[3] = {Movies("heropanti",2023),
//     Movies("kgf",2024),
//     Movies("puspa3",2025)};
//         for (int i = 0; i < 3; i++)
//         {
//             move[i].display();
//         }
//         return 0;
// }

// class Teacher{
//     public:
//     int id;
//     string name;
//     Teacher(){
//         cout<<"constructor run"<<endl;
//     }
//     ~Teacher(){
//         cout<<"destructor is called";
//     }

// };

// int main(){
//     Teacher t;
// }

// class time{
//     public:
//     int hr;
//     int min;

//     time add(time t){
//         time result;
//         result.min = min+t.min;
//         result.hr = hr+t.hr+(result.min/60);
//         result.min  = result.min%60;
//         return result;

//     }
//     void disp(){
//         cout<<"total time is "<<hr<<":"<<min;
//     }
// };
// int main(){
//     time t1;
//     t1.hr = 2;
//     t1.min = 30;
//     time t2;
//     t2.hr = 5;
//     t2.min = 50;
//     time t = t1.add(t2);
//     t.disp();

// }

// class Teacher {
//     protected:
//     int a,b;
//     public:
//     int x,y;

//    Teacher(){
//     x = 2;
//     y = 3;
//    }
// };

// class student:public Teacher{
//     public:
//  void result(){
//         cout<<x;
//     }
// };
// int main(){
// Teacher t;
// student s;
// s.result();
// }

// class teacher
// {
// public:
//     int a;
//     teacher()
//     {
//         a = 2;
//     }
// };

// class pricipal
// {
// protected:
//     int b;
//     pricipal()
//     {
//         b = 7;
//     }
// };

// class student : public teacher, private pricipal
// {
// public:
//     void disp()
//     {
//         cout << a << b;
//     }
// };

// int main()
// {
//     teacher t;
//     student s;
//     s.disp();
// }


// class dada{
// public:
// string name = "ram";
// void result(){
//     cout<<"dada";
// }
// };

// class papa :public dada{
//     public:
//     void result2(){
//         cout<<name;
//     }

// };

// class beta : public papa{
// public:
// void result3(){
//     cout<<"beta";
// }
// };



// int main(){
//     beta b;
//     papa p;
//     b.result2();
// }


// class parent{
//     public:
//     int a;
//     void result(){
//         a = 6;
//         cout<<a<<endl;
        
//     }
// };

// class child : public parent{
//     public:
//     void result2(){
//         result();
//         cout<<"child1"<<endl;
//     }
// };

// class child2 : public parent{
//     public:
//     void result3(){
//         result();
//         cout<<"child2"<<endl;

//     }
// };
// int main(){
// child c;
// child2 d;
// c.result2();
// d.result3();
// };



class parent{
    public:
    string name = "ram";
    void show(){
        cout<<name;
    }
};


class subParent :public parent{
    public:
    
    void mains(){
        show();
    }
};
class subParent2 :public parent{
    public:
    
    void mains(){
        show();
    }
};


class child :public subParent{
    public:
    void final(){
        mains();
    }

};


int main(){
    child c1;
    c1.final();
}


// class person{
//     public:
//     string name;

//     person(string name){
//         this->name = name;
//     }

//     void show(){
//         cout<<name;
//     }
// };

// int main(){
//     person p("jai shree ram");
//     p.show();
// }