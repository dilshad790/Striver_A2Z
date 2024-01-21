#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
void leftrotate(int arr[],int n,int d)
{
    d=d%n;
    int temp[d];
    // copy element to temp array
    for(int i=0; i<d; i++)
    {
        temp[i]=arr[i];
        
    }
    // Shift left
    for(int i=d; i<n; i++)
    {
        arr[i-d]=arr[i];
    }
    //
    // int j=0;
    
    for(int i=n-d; i<n; i++)
    {
        arr[i]=temp[i-(n-d)];
        // j++;
    }
    
}

int main() {
    //Write your code here
    cout<<"Enter the size of array:";
    int n;
    cin>>n;
    cout<<"Enter element of array:";
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int d;
    leftrotate(a, n, d);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}