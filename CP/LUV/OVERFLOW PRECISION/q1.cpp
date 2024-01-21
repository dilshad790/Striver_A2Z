#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    int a=100000;
    int b=100000;
    // int c=a*b; // 10^5*10^5=10^10 that is overflow value and overflow value  ek integer var me storre hua to jo ni hona chahie tha 
    long long int c=a*1LL*b;
    cout<<c<<endl;

//     int a1=100000;
//     int b1=100000;
//    double c1=a*b;
//    cout<<c1<<endl;
    

    double a2=100000;
    double b2=100000;
    double c2=a2*b2;
    // cout<<c2; // o/p -1e+010
    cout<<fixed<<c2<<endl;

//  
    cout<<fixed<<setprecision(2)<<c2<<endl;
    cout<<fixed<<setprecision(1)<<c2<<endl;




    return 0;
}