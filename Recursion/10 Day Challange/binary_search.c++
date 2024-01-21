#include <iostream>
using namespace std;

void print(int arr[],int s,int e)
{
    for(int i=s; i<=e; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool binarySearch(int arr[],int s, int e,int &k)
{ print(arr,s,e);
    
    // base case
    if(s>e)
    return false;

    int mid=(s+e)/2;
cout<<"value of arr mid is:"<<arr[mid]<<endl;

// ek case solve krdo
    if(arr[mid]==k)
    return true;

    if(arr[mid]<k)
    {
        return binarySearch(arr,mid+1,e,k);
    }
    else {
       return binarySearch(arr,s,mid-1,k);
    }
}
int main() {
    // Your code here
    int arr[5]={2,3,1,33,2};
    int key=11;
    cout<<binarySearch(arr,0,4,key);
    return 0;
}