#include <iostream>
using namespace std;
#include <cmath>
#include <ctime>
#include <cstdlib>


// int main(){
//     for(int i = 1;i<=100;i++){
//         cout<<i<<"\n";
//     }
// }

// int main(){
//     int sum = 0;
//     for(int i = 1;i<=100;i++){
//         sum+=i;
//     }
//     cout<<sum;
// }



// int main(){
//     for (int i = 1; i <=10; i++)
//     {
//         cout<<2*i<<"\n";
//     }
    
// }


// int main(){
//     int even = 0;
//     for (int i = 1; i <=55; i++){

//         if(i%2==0){
//             even++;
//         }
//         }
//         cout<<even;
    
// }

// int main(){
    // for (int i = 0; i < 6; i++) {
    //     cout<<" "<<"\n";
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout<<"*";
    //     }   
    // }


    // for (int i = 1; i < 6; i++){
    //     cout<<"*"<<"\n";
    //     for (int j = 0; j <i; j++){
    //         cout<<" ";
    //             }
    //             for (int z = 0; z < i; z++)
    //             {
    //                 cout<<"*";
    //                             }
                
        
    //     }
    
// }


// int main(){
    // cout<<"Enter a number";
    // int row;
    // cin>>row;
    // for (int i = 1; i <=row; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<"\n";
        
    // }


    // char input, alphabate = 'A';
    // cout<<"Enter the uppercase character you want to print in the last row:";
    // cin>>input;
    // toupper(input);
    // for (int i = 1; i <=(input-'A'+1); i++) {
    //    for (int j = 1; j <=i; j++){
    //     cout<<alphabate<<" ";
    //    }
    //    alphabate++;
    //    cout<<endl;
       
    // }
    
    // cout<<"Enter a number";
    // int row;
    // cin>>row;
    // for (int i = row; i >= 1; i--) {
    //    for (int j = 1; j <= i; j++) {
    //     cout<<"* ";
    //    }
    //    cout<<"\n";
       
    // }
    

// cout<<"Enter a number";
//     int row;
//     cin>>row;
//     for (int i = row; i >=1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<"\n";
        
//     }

// int space, row;
// cout<<"Enter number of row";
// cin>>row;
// for (int i = 1, k = 0 ;i <= row; i++,k=0){
//     for (space=1; space <= row-i; space++){
//         cout<<"  ";
//     }
//     while (k!=2*i-1) {
//         cout<<"* ";
//         k++;
//     }
//     cout<<"\n";
    
    
// }


// int space, row;
// cout<<"Enter number of row";
// cin>>row;
// for (int i = 1, k = 0 ;i <= row; i++,k=0){
//     for (space=1; space <= row-i; space++){
//         cout<<"  ";
//     }
//     while (k!=2*i-1) {
//         cout<<i<<" ";
//         k++;
//     }
//     cout<<"\n";
    
    
// }

// int row,space;
// cout<<"ENter a number";
// cin>>row;
// for (int i = 1; i <=row; i++){
//     for (space = 1; space <= row-i; space++)
//     {
//         cout<<" ";
//     }
   
//     for (int z = 1; z <= i; z++)
//     {
//         cout<<z<<" ";
//     }
//     cout<<endl;
    
    
// }



    // int space;
    // cout<<"enter a number";
    // int num;
    // cin>>num;
    // for (int i = 1; i <= num; i++) {
    //    for (int j = 1; j < num-i; j++){
    //     cout<<"  ";
    //    }
    //    for (int k = 1; k < i; k++)
    //    {
    //     cout<<k;
    //    }
    //    for (int l = 1; l < i; l++)
    //    {
    //     cout<<" ";
    //    }
       
    //    cout<<endl;
       
        
    // }
    
    
// }



// int main(){
//     int num = rand(time(NULL));
//     cout<<num;

// }

int main() {
    srand(time(0));
    int x = rand() % 10 + 1;
  
    int num;
    cout << "Enter your guess: ";
    cin >> num;
  
    while (num != x) {
      if (num > x) {
        cout << "Too high, try again: ";
      } else {
        cout << "Too low, try again: ";
      }
      cin >> num;
    }
  
    cout << "congruation" << endl;
  }