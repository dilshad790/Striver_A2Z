#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    int n;
    cin>>n;
        int cnt=0;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if((a==1 && b==1) || (a==1 && c==1) || (b==1 && c==1) )
        {
cnt++;
        }
    }
    cout<<cnt;
    return 0;
}