#include <bits/stdc++.h>
using namespace std;
// simple atoi function 

long long solve(string s, int sign, int i, long long result)
{ 
    // base case 
if(result*sign<=INT_MIN)
return INT_MIN;

if(result*sign>=INT_MAX)
return INT_MAX;

    if (s[i] == ' '|| s[i]=='-' || s[i]=='+' || s[i] < '0' || s[i] > '9')
        return sign * result;

int num=s[i]-'0';
return solve(s,sign,i+1,result*10+num);
}

int myAtoi(string s)
{
    int i = 0;
    while (s[i] == ' ')
    {
        i++;

    }

    int sign = 1;
    if (s[i] == '-')
    {              
        sign = -1;
        i++;
    }
    else if (s[i] == '+')
    {
        sign = 1;
        i++;
    }

   return solve(s, sign, i, 0);
}

int main()
{
    // Your code here

    string s = "42";
  cout<<  atoi(s);

    return 0;
}