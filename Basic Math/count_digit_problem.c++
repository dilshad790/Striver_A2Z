// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
//  Method 1
// int count_Digit(int n)
// {
// 
    // 
    // int count=0;
    // while(n!=0)
    // {
        // 
        
        // n=n/10;
// count++;
    // }
    // return count;
// }

// M-2
// int count_Digit(int n)

// {

    // string s=to_string(n);
    // return s.length();

// }

int count_Digit(int n)
{
    int digit=floor(log10(n)+1);
    return digit;
}


int main()
{
    int n=683949;
    cout<<count_Digit(n);
 return 0;
}