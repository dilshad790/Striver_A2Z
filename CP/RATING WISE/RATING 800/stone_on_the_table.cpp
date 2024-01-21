#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    int n;
    cin>>n;
    string s;

    for(int i=0; i<n; i++)
    {
        cin>>s;
    }
int cnt=0;

    for(int i=1; i<s.length(); i++)
    {
        if(s[i-1]==s[i])
cnt++;
    }
    cout<<cnt;
    return 0;
}