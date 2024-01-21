#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Optimal solution
bool check_prime(int n)
{
    for(int i=2; i<sqrt(n); i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    int x=2;
   cout<< check_prime(x);
 return 0;
}