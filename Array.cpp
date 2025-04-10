#include <iostream>
using namespace std;
// int main(){
    // int number[5] = {1,2,3,4,5};
    // cout<<number[4];



    // string name[3] = {"suresh","rahul","ankit"};
    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<name[i]<<"\n";
    // }
    
// }

int main(){
    int num[6] = {1,2,3,4,5,6};
    for(int i = 0;i<6;i++){
        if(num[i]%2==0){
            cout<<num[i]<<"the number is even"<<"\n";
        }else{
            cout<<num[i]<<"the number is odd"<<"\n";
        }
    }
}