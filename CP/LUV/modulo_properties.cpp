#include <bits/stdc++.h>
using namespace std;


int main() {
    // Your code here
    int n;
    // cout<<"Enter number:";
    cin>>n;
    long long fact=1; 
    int m=47; // given 
    for(int i=2; i<=n; i++)
    {
        // fact=fact*i;// sirf 20fact tak hi long long store kr skte hai
        fact=(fact*i)%47;// 
    }
    cout<<fact;
    return 0;
}