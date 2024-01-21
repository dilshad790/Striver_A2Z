#include <bits/stdc++.h>
using namespace std;
bool setBit(int n,int pos)
{
    return (n&(1<<pos))!=0;
}

void checkUnique1(int arr[],int n)
{
    // cout<<arr[3]<<endl;
    int xorsum=0;
    for(int i=0; i<n; i++)
    {
        xorsum=xorsum^arr[i];
    }
    // cout<<endl;
    int tempxor=xorsum;
// cout<<tempxor<<endl;
    int setbit=0;
    int pos=0;
    while(setbit!=1)
    {
        setbit=xorsum&1;
        pos++;
        xorsum=xorsum>>1;

    }
    // cout<<"pos"<<pos<<endl;
    int newxor=0;
    for(int i=0; i<n; i++)
    { 
    // cout<<newxor<<" "<<arr[i]<<endl;
        if(setBit(arr[i],pos-1))
        newxor=newxor^arr[i];
        
    }

cout<<newxor<<endl; // first unique number
cout<<(tempxor^newxor)<<endl; // second unique number

}
int main() {
    // Your code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    checkUnique1(arr,n);
    return 0;
}