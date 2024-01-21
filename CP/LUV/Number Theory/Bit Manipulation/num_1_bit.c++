#include<iostream>
using namespace std;
int num_of_1_bit(int n)
{
    int count=0;
    int mask=1;
    for(int i=0; i<32; i++)
    {
        if((n&mask)!=0)
        count++;
        mask=mask<<1;
    }
    return count;
}
int main()
{int n=2;// 2=0010
int ans=num_of_1_bit(n);
cout<<ans;

 return 0;
}