#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int count_frequency(int n,int x,int arr[])
{
map<int,int>mpp;
for(int i=0; i<n; i++)
{
    mpp[arr[i]]++;
}

for(int i=1; i<=n;i++ )
{
    cout<<i<<mpp[i]<<endl;
}

}
int main()
{
// int n;
// " Enter size of array:"
// cin>>n;

int arr[5]={1,2,1,3,2};
// for(int i=0; i<n; i++)
// {
// cin>>arr[i];
// }
// int x;
// cin>>x;
count_frequency(5,9,arr);

for(int i=0; i<5; i++)
{
    cout<<arr[i];
}

 return 0;
}