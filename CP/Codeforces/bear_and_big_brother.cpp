#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    int a,b;
    cin>>a>>b;

    int cnt=0;
    while(a<=b)
    {
        a=a*3;
        b=b*2;
        cnt++;
    }
    cout<<cnt;
    return 0;
}