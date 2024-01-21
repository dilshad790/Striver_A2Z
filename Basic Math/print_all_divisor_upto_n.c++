#include<iostream>
#include<bits/stdc++.h>
// #include<cmath.h>
using namespace std;
// Optimal Approach
// iska output sequence me ni aaega 
// for sequence arrange in ascending order
int print_all_divisor(int n)
{
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
        if(i!=n/i)
        {
            cout<<n/i<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    
    int a=12;
    print_all_divisor(a);
 return 0;
}