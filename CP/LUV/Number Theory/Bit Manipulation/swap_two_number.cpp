#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    int a,b;
    cin>>a>>b;

    // swap both number
    a=a^b;
    b=b^a; // b^(a^b)
    a=a^b; // a^(a^b)
    cout<<a<<" "<<b;
    return 0;
}