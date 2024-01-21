#include<iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter size of array="<<endl;
    cin>>n;
    // Creating 2D array of n*n
    int **arr=new int *[n];
    for(int i=0; i<n; i++)
{
    arr[i]=new int[n];
}

// takin intput
for(int i=0; i<n; i++)
{
for(int j=0; j<n; j++)
{
    cin>>arr[i][j];
}
}
// print 
cout<<endl;
for(int i=0; i<n; i++){


for(int j=0; j<n; j++)
{
    cout<<arr[i][j]<<" ";
}
cout<<endl;
}
 return 0;
}