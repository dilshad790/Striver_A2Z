// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
//  Method-1
// bool check_palindrome(int n)
// {
    // string rev=to_string(n);
    // reverse(rev.begin(),rev.end());
    // return to_string(n)==rev;
// 
// Method-2
bool check_palindrome(int n)
{
    string s=to_string(n);
    int i=0;
    int j=s.size()-1;
    while(i<=j)
    {
        // shortform 
        // if(s[i]!=s[j]){

        // i++;

        // j--;

        // return false;
        
        // }

        if(s[i++]!=s[j--]) 
        return false;

        return true;
        
    }
}

int main()
{
    int n=222;
    cout<<check_palindrome(n);
 return 0;
}