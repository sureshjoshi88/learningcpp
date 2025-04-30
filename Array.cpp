#include <iostream>
using namespace std;
#include <vector>
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


// int main(){
//     int number[]= {10,33,653,6643,43,87,67,98,30,21,11,232};
//     cout<<"enter your value";
//     int x ;
//     cin>>x; 
//     int lengths = sizeof(number)/sizeof(number[0]);
//     bool found = false;
//     for (int i = 0; i < lengths; i++){
//         if(number[i]==x){
//             found = true;
//             break;
//         }
//     }
//     if(found){
//         cout<<"the number is include"<<"\n";
//     }else{
//         cout<<"the number is not for present \n";
//     }
    
// }

// int main(){
//     int arr[] = {2,43,3,9,8,80,32,11,25,65};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0; i < size; i++)  {
//         cout<<arr[i]*2<<"\n";
//     }
     
// }


// int main(){
//     cout<<"enter a number:- ";
//     int x ;
//     cin>>x;
//     int arr[] = {2,3,4,5,6,7,8};
//     int length = sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0; i < length; i++) {
//         if(arr[i]==x){
//             int factroil =1;
//             for (int i = x; i>=1; i--) {
//                  factroil = factroil*i;
//             }
//             cout<<factroil<<"\n";
//         }
//     }
// }

// int main(){
//     int accountnumber = 787840;
//     int bal = 0, charge, amount;
//     int userInput ;

//     cout << "Enter accountnumber :";
//     cin >> userInput;
    

//     if (accountnumber == userInput)
//     {

//         while (accountnumber==userInput)
//         {

//             cout << "1.Deposite 2.withdraw 3.Balnce 4.Exit" << "\n";
//             cout << "Please enter only one option : ";
//             cin >> charge;

//             if (charge == 1)
//             {
//                 cout << "Enter your Deposit Value : ";
//                 cin >> amount;
//                 bal += amount;
//                 cout<<bal;
//             }
//             else if (charge == 2)
//             {
//                 cout << "Enter your withdraw value : ";
//                 cin >> amount;
//                 if (amount <= bal)
//                 {
//                     bal -= amount;
//                 }
//             }
//             else if (charge == 3)
//             {
//                 cout << bal << endl;
//             }
//             else if (charge == 4)
//             {
//                 cout<<"you are exit. Thank you!";
//             }
//         }
//         // break;
//     }else{
//         cout<<"Enter your correct account number" <<"\n";
//         while (userInput!=accountnumber)
//         {   
//             cout<<"AccounNumber is not match. Please try ! again : ";
//             cin>>userInput;
//         }
        
// }

// }


// int main(){
//     int accountNumber = 882436;
//     int inputnumber, charge,balnce=1000;
//     cout<<"Enter your accountnumber:- ";
//     cin>>inputnumber;
//     if(accountNumber==inputnumber){
//         cout<<"1.Deposite 2.withdraw 3.Balnce 4.Exit"<<"\n";
//         cout<<"please salect one value number";
//         int value;
//         cin>>value;
//         if(value==1){
//             cout<<"please enter a amount";
//             int money;
//             cin>>money;
//              balnce+=money;
//             cout<<"your total amount = "<<balnce;
//         }else if(value==2){
//             cout<<"please enter a amount";
//             int money;
//             cin>>money;
//             if(money<balnce){
//                 balnce-=money;
//                  cout<<"your total amount = "<<balnce;
//             }else{
//                 cout<<"Insufficient balance!";
//             }
//         }else if(value==3){
//             cout<<"your total amount = "<<balnce;
//         }else if(value==4){
//             cout<<"your are exitest in this account";
//         }else{
//             cout<<"you are wrong number salect";
//         }
//     }else{
//         cout<<"please try again do not match in account number !";
//     }
// }


// int main(){
// int arr[5] = {2,4,6,8,5};
// for (int newarr:arr)
// {
//     cout<<newarr*2;
// }


// }
// int main(){
//     string names[] = {"suresh","neeraj","ankit","rahul","vikash"};
//     for (int i = 0; i < 5; i++)
//     {
//        cout<<names[i]<<"\n";
//     }
    
// }

// int main(){
//     int numarr[] = {12,33,43,56,54,78,98,65,38};
//     int num =sizeof(numarr[0]);
//     int total = sizeof(numarr);
//     int length = total/num;
//     int sum = 0;
//     for (int i = 0; i < length; i++)
//     {
//          sum+=numarr[i];
//          cout<<numarr[i]*numarr[i]<<"\n";
//     }
//     cout<<sum;

// }

// int main(){
//     int myarray[]={1,23,43,54,65,56,45,76,88,04,34};
//     for(int aray : myarray){

//         cout<<aray<<endl;
//     }
// }

// int main(){
//     int aray[] = {12,34,65,8,75,5,67,68,54,35};
//     int size = sizeof(aray);
//     int max  = aray[0];
//     int length = size/sizeof(aray[0]);
//     for (int i = 0; i <length; i++) {
//         if(aray[i]>max){
//             max =aray[i];
//         }
//     }
//     cout<<max;
    
// }

// int main(){
//     int aray[] = {12,34,65,8,75,5,67,68,54,35};
//     int size = sizeof(aray);
//     int small  = aray[0];
//     int length = size/sizeof(aray[0]);
//     for (int i = 0; i <length; i++) {
//         if(aray[i]<small){
//             small =aray[i];
//         }
//     }
//     cout<<small;
    
// }


// int main(){
//     int averge[] = {12,10,20,40,44,65,82,18,67};
//     int size = sizeof(averge[0]);
//     int length = sizeof(averge)/size;
//     int sum = 0;
//     for (int i = 0; i < length; i++) {
//         sum+=averge[i];
//     }
//     int avergearay= sum/length;

//     cout<<avergearay;
    

// }


// int main(){
//     int num[]={14,54,67,98,34,23};
//     int size = sizeof(num);
//     int largest  = num[0];
//     int seconlargest = 1;
//     int length = size/sizeof(num[0]);
//     for(int i = 0;i<length;i++){
//         if(num[i]>largest){
//             largest = num[i];
//         }
//     }
//     for (int i = 0; i < length; i++)
//     {
//        if(num[i]!=largest){
//         if(num[i]>seconlargest){
//             seconlargest = num[i];
//         }
//        }
//     }
    
//     cout<<seconlargest;
// }



int main(){
    vector<string> names = {"suresh","ankit","vikash"};
    names.push_back("rahul");
    for(string name:names){
        cout<<name<<endl;   ;
    }
}