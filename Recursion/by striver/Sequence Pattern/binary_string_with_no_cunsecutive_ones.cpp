// Binary strings with no consecutive 1s.

#include <bits/stdc++.h>
#include<string>
using namespace std;

void substring(vector<string>&ans,string s, int k,int n)
{

// base case
if(n==k)
{ s[n] = '\0';
     cout<<s<<" ";
    // ans.push_back(s);
    return;
}

// ek case solve kro
if(s[n-1]=='1')
{
    s[n]='0';
substring(ans,s,k,n+1);
}

 if(s[n-1]=='0')
{
    s[n]='0';
    substring(ans,s,k,n+1);

    s[n]='1';
    substring(ans,s,k,n+1);
}


}

void generateString(int k) {
    // Write your code here.

vector<string>ans;
string s(k,' ');
s[0]='0';
substring(ans,s,k,1);
 s[0]='1';
// cout<<s;
substring(ans,s,k,1);

// return ans ;

}

int main() {
    // Your code here
    int k;
    cin>>k;

generateString(k);

string s="0";

s[0]='1';

// cout<<s<<endl;

    return 0;
}