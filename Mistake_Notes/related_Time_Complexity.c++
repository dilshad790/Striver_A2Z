#include<iostream>
using namespace std;
int main()
{
    int n=10;
    int cnt=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<i; j++)
        {
            cnt++;
        }
    }
    cout<<cnt;
 return 0;
}