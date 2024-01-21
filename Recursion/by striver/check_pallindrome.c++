#include<iostream>
using namespace std;
bool check_Palindrome(string s)
{
for(int i=0; i<s.length()/2; i++)
{
    if(s[i]!=s[s.length()-i-1]) return false;
}
    return true;
}
int main()
{
    string s="abbaa";
    cout<<check_Palindrome(s);
 return 0;
}