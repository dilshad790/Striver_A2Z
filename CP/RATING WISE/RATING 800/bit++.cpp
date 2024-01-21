#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    int n;
    cin>>n;
int x=0;
    while(n--)
    {
        string s;
        cin>>s;
       if((s=="X++") || (s=="++X"))
       x++;
       else if((s=="X--") || (s=="--X"))
       x--;
    }
    cout<<x;
    return 0;
}