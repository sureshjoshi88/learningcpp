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



// int main(){
//     vector<string> names = {"suresh","ankit","vikash"};
//     names.push_back("rahul");
//     for(string name:names){
//         cout<<name<<endl;   ;
//     }
// }



// int main(){
//     int x = 10;
//     string bike[x];
//     // fill(bike,bike+10,"ktm");
//     fill(bike,(bike+x/2),"bullete");
//     fill((bike+x/2),bike+x,"ktm");
//     for(string i :bike){
//         cout<<i<<endl;
//     }

// }


// int main(){
   
//     int x = 5;
//    string name[x];
//     fill(name,name+x,"suresh");
//     cout<<name;
// }




// int main(){
//     // fill()
// // string cars[] ={"bmw","bmw","bmw","bmw","bmw"};
// //fill(starting point, end, value)
// int x =9;
// string bike[x];
// fill(bike,bike+x,"challenger");
// // fill(bike,(bike+x/2),"scorpio");
// // fill((bike+x/2),bike+x,"fortuner");
// for(string element : bike){
//     cout<<element<<endl;
// }
//     // multidimensional array


// }


// int main(){
//     //multindimensional array
//     // int arr[]={1,2,3};

//     string arr[][2]={   {"swift","desire"},
//                         {"scorpio","dodge"},
//                         {"alto","creta"} };
//     // cout<<arr[0][0]<<" ";
//     // cout<<arr[0][1]<<"\n";
//     // cout<<arr[1][0]<<" ";
//     // cout<<arr[1][1]<<"\n";
//     // cout<<arr[2][0]<<" ";
//     // cout<<arr[2][1]<<"\n";

//     int row =sizeof(arr)/sizeof(arr[0]);
//     int col =sizeof(arr[0])/sizeof(arr[0][0]);
// }

int main(){
    // int row;
    // int col;
    // cout<<"entre a row:-";
    // cin>>row;
    // cout<<"entre a col:-";
    // cin>>col;
    // int arr[row][col];
    // for (int i = 0; i < row; i++) {
    //  for (int j = 0; j < col; j++)
    //  {
    //      cout<<"enter a value :-";
    //    cin>>arr[i][j];
    //  }
     
    // }
    // for (int  i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
     
    //        cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    // int row =3;
    // int col = 3;
    // int arr[row][col] = {{1,2,3},{4,5,6},{7,8,9}};
    // int trans[row][col];

    // if(row==col){
    //     for (int  i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         trans[i][j] = arr[j][i];
    //     }
        
    // }
    // for (int  i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
     
    //        cout<<trans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // }else{
    //     cout<<"pleasse enter same row and col";
    // }





//       int row =3;
//     int col = 3;
//     int arr[row][col] = {{1,2,3},{4,5,6},{7,8,9}};
//     int trans[row][col];
//     int sum = 0;

//         for (int  i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             sum+= arr[j][i];

//         }
    

// }
// cout<<sum;


    // int row =3;
    // int col = 3;
    // int arr[row][col] = {{1,2,3},{4,5,6},{7,8,9}};
    // int arr2[row][col] = {{1,2,3},{4,5,6},{7,8,9}};
    // int arr3[row][col];

    // for (int i = 0; i < row; i++)
    // {
    //    for (int j = 0; j < col; j++)
    //    {
    //    arr3[i][j] = arr[i][j]+arr2[i][j];
    //    }
       
    // }
    
    // for (int i = 0; i < row; i++)
    // {
    //    for (int j = 0; j < col; j++)
    //    {
    //     cout<<arr3[i][j]<<" ";
    //    }
    //    cout<<endl;
    // }
    

    // int row;
    // int col;

    // cout<<"entre a row:-";
    // cin>>row;
    // cout<<"enter a col:-";
    // cin>>col;
    // int arr[row][col];
    // for (int i = 0; i < row; i++) {
    //   for (int j = 0; j < col; j++){
    //     cout<<"entr a value:-";
    //    cin>>arr[i][j];
    //   }
      
    // }

    //  for (int i = 0; i < row; i++) {
    //      cout<<"{";
    //   for (int j = 0; j < col; j++){
    //     cout<<arr[i][j]<<" ";
       

    //   }
    //   cout<<"}";
    //   cout<<endl;
      
    // }
    

    
    // int row =3;
    // int col = 3;
    // int arr[row][col] = {{2,3,4},{5,6,7},{8,9,10}};
    // int arr2[row][col] = {{1,2,3},{4,5,6},{7,8,9}};
    // int arr3[row][col];

    // for (int i = 0; i < row; i++)
    // {
    //    for (int j = 0; j < col; j++)
    //    {
    //    arr3[i][j] = arr[i][j]*arr2[i][j];
    //    }
       
    // }
    
    // for (int i = 0; i < row; i++)
    // {
    //    for (int j = 0; j < col; j++)
    //    {
    //     cout<<arr3[i][j]<<" ";
    //    }
    //    cout<<endl;
    // }


  // int r1 = 3;
  // int c1 = 2;
  // int r2 = 2;
  // int c2 = 3;


  
// int a=3;
// int *ptr;
// ptr = &a;
// *ptr = 5;
// cout<<ptr<<endl;
// cout<<*ptr;

// int **temp;
// temp = &ptr;
// cout<<temp<<endl;
// int ***bb;
// bb = &temp;
// cout<<bb;

int r1,c1,r2,c2;
cout<<"enter valaue";
cin>>r1>>c1>>r2>>c2;
int a[r1][c1];
int b[r2][c2];
for(int i =0;i<r1;i++){
    for (int j = 0; j < c1; j++)
    {
        cout<<"please enter value";
        cin>>a[i][j];
    }
}
for(int i =0;i<r2;i++){
    for (int j = 0; j < c2; j++)
    {
        cout<<"please enter value";
        cin>>b[i][j];
    }
}
int ans[r1][c2];
if(r1==c2){
    for (int i = 0; i < r1; i++)
    {
       for (int j = 0; j < c2; j++)
       {
       ans[i][j]=0;
       for (int k = 0; k < c1; k++)
       {
       ans[i][j] =ans[i][j]+ (a[i][k]+b[k][j]);
       }
       }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}else{
    cout<<"please r1 and c2 same value enter";
}

// Online C++ compiler to run C++ program online

    // Write C++ code here
//     int r1,c1,r2,c2;
//     cout<<"enter"<<endl;
//     cin>>r1>>c1>>r2>>c2;
//     int A[r1][c1];
//     int B[r2][c2];
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c1;j++){
//             cin>>A[i][j];
            
//         }
//     }
    
//     for(int i=0;i<r2;i++){
//         for(int j=0;j<c2;j++){
//             cin>>B[i][j];
            
//         }
//     }
//     int ans[r1][c2];
//     if(r2==c1){
        
//         for(int i=0;i<r1;i++){
//         for(int j=0;j<c2;j++){
//             ans[i][j]=0;
//         for(int k=0;k<c1;k++){
//             ans[i][j]=ans[i][j]+ (A[i][k]+B[k][j]);
//         }
//         }
//         }
//          for(int i=0;i<r1;i++){
//         for(int j=0;j<c2;j++){
//         cout<<ans[i][j]<<"  ";
//     }
//     cout<<endl;
//          }

// }
}