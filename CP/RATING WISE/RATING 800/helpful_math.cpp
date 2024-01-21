#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Your code here
    string s;
    cin>>s;
    
//     string temp;
//     for(int i=0; i<s.size(); i+=2)
//     {
//         temp.push_back(s[i]);
//     }

// sort(temp.begin(),temp.end());
// // cout<<temp;

// string ans="";

// for(int i=0; i<temp.size()-1; i++)
// {
//     ans=ans+temp[i]+'+';
// }
// ans.push_back(temp[temp.size()-1]);
// cout<<ans;

// // T.c-O(nlogn)

int one=0,two=0,three=0;
for(int i=0; i<s.size(); i+=2)
{
    if(s[i]=='1')
    one++;
    else if(s[i]=='2')
    two++;
    else three++;
}

string ans="";
for(int i=0; i<one; i++)
ans+="1+";

for(int i=0; i<two; i++)
ans+="2+";

for(int i=0; i<three; i++)
ans+="3+";

for(int i=0; i<ans.size()-1; i++)
cout<<ans[i];
    return 0;
}