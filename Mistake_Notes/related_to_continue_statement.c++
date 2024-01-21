#include<iostream>
using namespace std;
int main()
{
    for(int i=1; i<=10; i++)
    {
        if(i==4)
        // continue ka use yaad rakhna
        continue;  // used for skip
        else cout<<i;
    }
 return 0;
}