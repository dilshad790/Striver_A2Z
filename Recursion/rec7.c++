#include<iostream>
using namespace std;
// Say Digit Problem
void SayDigit(int n, string arr[])
{
    // bass case
    if(n==0)
    return;
    // processing 
    int digit=n%10;
    n=n/10;
    // recursive call
    SayDigit(n,arr);
    cout<<arr[digit]<<" ";
}
int main()
{
    string arr[10]{"Zero","One","Two", "Three","Four","Five","Six","Seven","Eight","Nine"};
    int n;
    cout<<"Enter no.";
    cin>>n;
SayDigit(n,arr);
 return 0;
}