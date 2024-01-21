#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    
      int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        char c1=s[0];
        int num=s[1]-'0';
        for(int i=1; i<=8; i++)
        {
            if(i==5)
            continue;
            else 
            {
                string s=to_string(i);
            cout<<c1<<s<<endl;
            }
        }
for(char i='a'; i<='h'; i++)
{
    string s2=to_string(num);
    cout<<i<<s2<<endl;
}
 
 
 
            }
   


            
    return 0;
}