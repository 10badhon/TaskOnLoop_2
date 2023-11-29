//Write a program in C++ to find the sum of digits of a given number.

#include<iostream>
using namespace std;
int main(){
     int num,sum=0,rem;
     cout<<"Enter a positive number";
     cin>>num;

     while(num>0){
            rem= num%10;
            sum= sum+rem;
            num=num/10;
            }
           cout<<sum;
           return 0;




}
