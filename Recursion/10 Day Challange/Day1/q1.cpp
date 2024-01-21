#include <bits/stdc++.h>
using namespace std;
// factorial
int fact(int n)
{
    if(n==1)
    return 1;

    return n*fact(n-1);
}
int main() {
    // Your code here
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}