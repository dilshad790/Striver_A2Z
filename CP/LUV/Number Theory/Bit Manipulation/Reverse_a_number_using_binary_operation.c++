#include<iostream>
using namespace std;
unsigned reverse_Number(int n)
{
int result=0;
for(int i=0; i<32; i++)
{
int lsb=n&1;
int reverseLsb=lsb<<(31-i);
result=result |reverseLsb;
n=n>>1;
}
return result;

}
int main()
{
   unsigned int n=1;
    cout<<reverse_Number(n);
 return 0;
}