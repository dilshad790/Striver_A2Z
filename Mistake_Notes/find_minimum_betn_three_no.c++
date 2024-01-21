#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    int a=10;
    int b=3;
    int c=23;
    //  find minimum of three numbers
    // M1
    int x=min(a,min(b,c));
    cout<<x<<endl;
    
// M2 best method
    int minm=min({a,b,c});
    cout<<minm<<endl;
    return 0;
}