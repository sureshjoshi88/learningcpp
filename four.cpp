#include <iostream>
using namespace std;
#include <typeinfo>
#include <cmath>
// int main(){
//    typedef typealias

// int x =8;
// typedef int abc;
// abc  z =9;

// using abc = string;

// int student  = 20;
// student+= 1;
// student%=3;
// student = student + 1
// cout<<student;

// arithemetic operations
//  }

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

// int main(){
//     string name ;
//     cout<<"Enter your name :-";
//     getline(cin>>ws,name);
//     cout<<"entr your job :-";
//     string job;
//     getline(cin>>ws,job);
//     int age;
//     cout<<"enter your age :-";
//     cin>>age;
//     cout<<"my name is "<<name<<" and job is "<<job<<" and age is "<<age;
// }

// int main(){
// type conversion
// there are two types of type conversion
// explict (automatically), implicit (conversion of data types manually)

// explicit
// int x =3.14;
// cout<<x;
// implicit
// double x = (int)3.14;
// std::cout << "Type of int_var: " << typeid(x).name() ;
// eg

// char x =100;
// cout<<x;
// cout<<(char)100;

// eg
// bodmas
//  int correct = 8;
//  int questions = 10;
//  double score = (double)correct/questions * 100;
//  cout<<score<<"%";
//  use of cin

// string x;
// cout<<"Enter a Name ";
// cin>>x;
// cout<<x<<" is a user";

// how to input sentence using getline()

// int age;
// string name;
// cout<<"Enter your Age.";
// cin>>age;
// cout<<"Enter your Name.";
// getline(cin>>ws,name);

// cout<<"Age of "<<name<<" is "<<age;
// }

// solve bug getline() bug using whitespace
// getline(cin>>ws,name);

// int main(){
//     double a = 10.6;
//     double total = (int)a;
//         cout<<total;
// }

// int main(){
//     cout<<"enter your name";
//     string name ;
//     getline(cin>>ws,name);
//     cout<<"enter your age";
//     int age;
//     cin>>age;
//     cout<<"enter your village";
//     string village;
//     getline(cin>>ws,village);
//     cout<<"my name is "<<name<<" and my age is a "<<age<<" and my village is a "<<village;
// }

// int main(){
//     int number;
//     cout<<"Enter a number :-";
//     cin>>number;
//     if(number%2==0){
//         cout<<number<<" the number is even";
//     }else{
//         cout<<number<<" the number is odd";
//     }
// }

// int main(){
//     int num1;
//     int num2;
//     cout<<"Enter your num";
//     cin>>num1;
//     cout<<"Enter your num";
//     cin>>num2;
//     int total = num1+num2;
//     cout<<total;
// }

// int main()
// {
//     int num1;
//     cout << "Enter your num";
//     cin >> num1;
//     int factroil = 1;
//     for(int i = num1;i>=1;i--){
//        factroil = i*factroil;
//     }
//     cout<<factroil;
// }

// int main(){
//     cout<<"enter a number:-";
//     int number1;
//     cin>>number1;
//     cout<<"enter a sin:-";
//     char x;
//     cin>>x;
//     cout<<"enter a number2:-";
//     int number2;
//     cin>>number2;
//     if(x=='+'){
//         cout<<number1+number2;
//     }else if(x=='-'){
//         cout<<number1-number2;

//     }
//     else if(x=='*'){
//         cout<<number1*number2;

//     }
//     else if(x=='/'){
//         cout<<number1/number2;

//     }
//     else{
//         cout<<"invalid data";
//     }
// }


// int main(){
    // int x = 5;
    // int y = 3;

    //double z = pow(x,2);
//    int z = max(x,y);  //maxium value dega 
    // int z = min(x,y);   // minuim value dega
    // int z = sqrt(x);   // rud deta h
    // int z = round(3.2);   // rounded value dega
    // int z = ceil(3.8);   // age ki value dega
    // int z = floor(3.8);  // piche ki value dega
    // cout<<z;a
    
// }



// int main(){
//     int number;
//     cout<<"enter a number please enter a 1-7 number :- ";
//     cin>>number;
//     switch (number)
//     {
//     case 1:
//         cout<<"monday";
//         break;
//     case 2:
//         cout<<"tuesday";
//         break;
//     case 3:
//         cout<<"wednesday";
//         break;
//     case 4:
//         cout<<"thursday";
//         break;
//     case 5:
//         cout<<"friday";
//         break;
//     case 6:
//         cout<<"saturday";
//         break;
//     case 7:
//         cout<<"sunday";
//         break;
    
//     default:
//     cout<<"invalid number please try again";
//         break;
//     }
// }


// int main(){
//         cout<<"give me number and take me this number quare :- ";
//         int number;
//         cin>>number;
//         cout<<number*number;
//     }

// int main(){
//     double pi = 3.14;
//     double r = 9;
//     double area = pi*r*r;
//     cout<<area;
// }

// int main(){
//     int p = 2;
//     double l = 5;
//     double w = 3;
//     double total = p*(l+w);
//     cout<<total;
// }

// int main(){
//     int l = 9;
//     int w = 5;
//     int total = l*w;
//     cout<<total;
// }

// int main(){
//     int x,y,z;
//     cout<<"enter a number:-";
//     cin>>x;
//     cout<<"enter a number:-";
//     cin>>y;
//     cout<<"enter a number:-";
//     cin>>z;
//     int sum = x+y+z;
//     cout<<sum;
// }
// int main(){
//     string x,y;
//     cout<<"enter a name ";
//     getline(cin>>ws,x);
//     cout<<"enter your second name ";
//     getline(cin>>ws,y);
//     cout<<x+y;
    
// }



//ternary operater

// int main(){
    // int num =20;
    // num%2==0?"the number is even":"the number is od";
    // int x = 90;
    // x>=40?cout<<"you are pass":cout<<"you are fail";

    // int x = 50;
    // x>=33?cout<<"you are only pass"?x>=50?cout<<"yor are average"?x>=70?cout<<"you are good"?x>=90?cout<<"you are honest person":cout<<"yor are fail";

// }

// int main(){
//     int x = 5;
//     int y = x++ - --x + ++x*x--;
//     cout<<x<<"\n";
//     cout<<y;
// }

// int main(){
// int a = 3;
// int b = a++ * (++a + a--) - --a;
// cout<<a<<"\n";
// cout<<b<<"\n";


// int z = 0;
// z = z++ + z++ + ++z;
// cout<<z;
// }
