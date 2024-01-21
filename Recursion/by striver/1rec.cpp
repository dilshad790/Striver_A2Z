#include<iostream>
#include<vector>
using namespace std;

int countBinaryString(int n)   
{
    int zeroend=1;
    int oneend=1;
    
    int sum=zeroend+oneend;
    if(n==1)
    return sum;
int  i=2;

    while(i<=n)
    {
        oneend=zeroend;
        zeroend=sum;
        sum=zeroend+oneend;
        i++;
    }
return sum;
}

int main()
{
    int n=3;
    int ans=countBinaryString(n);
    cout<<ans;

 return 0;
}