
#include <iostream>
using namespace std;
int hr(int n){
    int a1;
    a1=n*3600;
    return a1;
}
int min(int m){
    int a2;
    a2=m*60;
    return a2;
}
int add(int o){
    int a3;
    a3=o;
    return a3;
}
int main() {
   int m,n,o,a;
   cout<<"enter time in hour,min,sec ";
   cin>>n>>m>>o;
   a=hr(n)+min(m)+add(o);
   if(m/2<=5){
       if(n/2<=5){
           if(o/2<=5){
               cout<<"0"<<m<<":"<<"0"<<n<<o;
           }
           else
               cout<<"0"<<m<<":0"<<n<<":"<<o;}
        else
            cout<<"0"<<m<<":"<<n<<":"<<o;}
    else
        cout<<m<<":"<<n<<":"<<o;
   
   cout<<"\ntotal time in seconds:"<<a;
}
