#include<iostream>
using namespace std;
bool BinarySearch(int arr[],int s,int e,int k)
{
    // Base case
    if(s>e)
    return false;

    int mid=s+(e-s)/2;

    if(arr[mid]==k)
    return true;

//recursive call
    if(arr[mid]<k)
    return BinarySearch(arr,mid+1,e,k);
    else
    return BinarySearch(arr,s,mid-1,k);

}
int main()
{
     int arr[5]={2,3,4,6,8};
    int k=3;
    
    bool ans=BinarySearch(arr,0,4,11);
    if(ans)
    cout<<"Milgaya"<<endl;
    else
    cout<<"Ni Millo"<<endl;
    // cout<<"present or Not"<<BinarySearch(arr,0,4,k);

return 0;
}