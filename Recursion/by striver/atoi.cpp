#include <bits/stdc++.h>
using namespace std;

int createAtoi(string s)
{
    // Write your code here.
    int i = 0;
    while (i == ' ')
    {
        i++;
    }

    bool positive = false;
    bool negative = false;
    if (s[i] == '-')
    { 
        // cout<<s[i];
        negative = true;
        
    }

    if (s[i] == '+')
    {
        positive = true;
        
    }

    if(positive==true)
    {
        i++;
    }
    // else i=i;
    if(negative==true)
    {
        i++;
    }
    // else i=i;
    int num = 0;
    while (s[i] >= '0' && s[i] <= '9')
    {
        num = (num * 10) + (s[i]-'0');
        
        i++;
    }

    
    if(num>INT_MAX)
    return INT_MAX;

    else if(num<INT_MIN)
    return INT_MIN;
else if(negative==true)
    num=-num;
    
    else if(num==num)
    return num;
    else return num;
}
int main()
{
    // Your code here
    // char c='1'-'0';
    // cout<<c*1;
    string s;
    cin>>s;
    cout<<createAtoi(s);
    
    return 0;
}