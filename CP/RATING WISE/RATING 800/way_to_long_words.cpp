#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;

        int cnt=0;
        for(int i=0; i<s.size(); i++)
        {
            cnt++;
        }

        if(cnt>10)
        {
            cout<<s[0]<<cnt-2<<s[cnt-1]<<endl;
        }
        else cout<<s<<endl;
    }
    return 0;
}