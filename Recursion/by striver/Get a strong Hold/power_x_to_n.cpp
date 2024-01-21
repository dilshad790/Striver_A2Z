#include <bits/stdc++.h>
using namespace std;
// int power1(int x,int n)
// {
//     if(n<=0)
//     return 1;

//     int ans= x*power1(x,n-1);
//     return ans;
// }
int main() {
    // Your code here
double x,n;
cin>>x>>n;

// cout<<power1(x,n);

// ********* Accident zone
cout<<pow(x,n)<<endl;

int ans=pow(x,n);
cout<<ans<<endl;
int ans2=round (pow(x,n));
cout<<ans2<<endl;
double ans3=pow(x,n);
cout<<ans3<<endl;

//  solution - https://www.geeksforgeeks.org/power-function-c-cpp/

    return 0;
}