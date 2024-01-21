#include <bits/stdc++.h>
using namespace std;
int solve(string s,int sign,int i,long result)
{
// base case
if(result>INT_MAX )
return INT_MAX;

if(result<INT_MIN)
{
    return INT_MIN;
}

// 
if(i==s.size() || s[i]<'0' || s[i]>'9')
return sign*result;

result=solve(s,sign,i+1,(result*10+(s[i]-'0')));
        
        return result;

}

int atoi(string s)
{
int i=0,sign=1,result=0;

while(s[i]=' ')
{
    i++;
}

if(s[i]=='-')
{
    sign=-1;
    i++;
}

return solve(s,sign,i,result);


}
int main() {
    // Your code here
    string s;
    cin>>s;

    cout<<atoi(s);
    return 0;
}