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

// int main(){
//     int num[6] = {1,2,3,4,5,6};
//     for(int i = 0;i<6;i++){
//         if(num[i]%2==0){
//             cout<<num[i]<<"the number is even"<<"\n";
//         }else{
//             cout<<num[i]<<"the number is odd"<<"\n";
//         }
//     }
// }

// int main(){
//     int nums[4] = {1,2,4,6};
//     for(int i : nums){
//         cout<<i<<"\n";
//     }
// }


int main(){
    int number[]= {10,33,653,6643,43,87,67,98,30,21,11,232};
    cout<<"enter your value";
    int x ;
    cin>>x; 
    int lengths = sizeof(number)/sizeof(number[0]);
    bool found = false;
    for (int i = 0; i < lengths; i++){
        if(number[i]==x){
            found = true;
            break;
        }
    }
    if(found){
        cout<<"the number is include"<<"\n";
    }else{
        cout<<"the number is not for present \n";
    }
    
}

int main(){
    int arr[] = {2,43,3,9,8,80,32,11,25,65};
    int size = sizeof(arr)/sizeof(arr[0])
    for (int i = 0; i < count; i++)
    {
        /* code */
    }
     
}