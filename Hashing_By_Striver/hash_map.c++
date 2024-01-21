#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<" Enter element in array:";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

     map<int,int> mpp;

    for(int i=0; i<n; i++)
    {
        mpp[arr[i]]++;
    }
    // iterating a map
    for(auto it :mpp)
    {
        // cout<<it.first;
        cout<<it.second<<" ";
    }

    // int q;
    // cout<<"Enter no. of queries;";
    // cin>>q;
    // while(q--)
    // {
    // //     int num;
    // //   cin>>num;

    //  // fetch
    //  for(int i=0; i<n; i++)
    //  {
    //    cout<<mpp[arr[i]]<<" ";

    //  }
    // }
 return 0;
}