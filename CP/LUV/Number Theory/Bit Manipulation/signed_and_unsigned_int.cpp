#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    cout<<INT_MAX<<endl;

    // int a=(1<<32)-1; it gives an error bcz 1<<32 cant be calculated bcz 1<<32 is 33 bit
    int a=(1LL<<32)-1;
    cout<<a<<endl;

int b=(1LL<<31)-1;
cout<<b<<endl;

    return 0;
}