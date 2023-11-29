/*Write a program that take two integer numbers and display the sum of
even numbers between these two input numbers*/
#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter end  number";
   cin>>n;
   int sum=0,i;
   cout<<"enter start number";
   cin>>i;
   for(i; i<n; i++){
        if(i%2==0){
            sum=sum+i;
        }


   }
   cout<<sum;
   return 0;
}



