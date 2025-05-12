#include <iostream>
using namespace std;

class student{
    public:
    int a;
    float b;
    // student(){
    //     a = 5;
    //     b = 4.5;
    // }
    student(int p ,float k){
        a = p;

        b = k;
    }
    int result(){
        // cout<<"hello "<<a<<" "<<b;
        return a;
    }
};
int main(){
student s2(3,5);
int c = s2.result();
cout<<c;
}