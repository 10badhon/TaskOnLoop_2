//Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.

#include<iostream>
using namespace std;
int main(){
      int a,b;
      cout<<" enter two number ";
      cin>>a>>b;

      while(a!=b){
        if(a>b){
            a=a-b;
                }
        else{
            b=b-a;
        }

         }
         cout<<"the gcd is "<<a;
         return 0;

}
