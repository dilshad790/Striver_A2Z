#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;
    int*arr=new int[n];// This is a Dynamic array
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    // print array
    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }
 return 0;
}