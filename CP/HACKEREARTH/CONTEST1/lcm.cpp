#include <iostream>
using namespace std;
// method1 
// T.C-O(a*b)
int lcmOftwoNum(int a,int b)
{
    int lcm;
for(int i=1; i<=a*b; i++)
{
    if(i%a==0 && i%b==0)
    {
        lcm=i;
        break;
    }
}
return lcm;
}

int gcd(int a,int b)
{
    if(a==0)
    return b;
    gcd(b%a,a);

}
// m2
int lcm2(int a,int b)
{
    int lcm=(a*b)/gcd(a,b);
}
int main() {
    // Your code here
int a=5;
int b=20;
cout<<lcmOftwoNum(a,b)<<endl;
cout<<lcm2(a,b)<<endl;
    return 0;
}