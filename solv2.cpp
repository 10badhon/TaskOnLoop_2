//Write a program in C++ to convert a decimal number to binary number
#include<iostream>
using namespace std;
int main(){
     int num,rem,ans;
     cout<<"enter a decimal number";
     cin>>num;
     while(num>0){
        rem=num%2;
        cout<<rem;
        num/=2;
     }

         return 0;


}


