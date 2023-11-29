//Find the Fibonacci series of N terms.
#include<iostream>
using namespace std;
int main(){
    int i,num,t1=0,t2=1,n_term;
    cout<<"enter the number of terms";
    cin>>num;

    for(i=1; i<=num; i++){
        cout<<t1<<" ";
        n_term= t1+t2;
        t1=t2;
        t2=n_term;
  }
return 0;
}
