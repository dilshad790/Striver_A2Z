#include<iostream>
using namespace std;
bool checkpalindrome(string &str,int i,int j)
{
    if(i>j)
    return true;
    if(str[i]!=str[j])
    return false;
    else
    checkpalindrome(str,i+1,j-1);
}
int main()
{
    string name="aabbaa";
    bool ispalindrome=checkpalindrome(name,0, name.length()-1);
    if(ispalindrome)
    cout<<"palindrome"<<endl;
    else
    cout<<"Not a palindrome"<<endl;
 return 0;
}