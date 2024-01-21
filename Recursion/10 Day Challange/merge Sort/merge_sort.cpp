#include <iostream>
using namespace std;
int* merge(int arr[],int s,int e)
{





}

void mergeSort(int arr[],int s,int e)
{
    // base case
    if(s>=e)
    return ;
int mid=(s+e)/2;
mergeSort(arr,s,mid);
mergeSort(arr,mid+1,e);
merge(arr,s,e);

}
int main() {
    // Your code here
int arr[5]={2,8,6,4,10};
// for(int i=0; i<5; i++)
// {
//     cin>>arr[i];
// }

mergeSort(arr,0,5);

for(int i=0; i<5; i++)
{
    cout<<arr[i]<<" ";
}
    return 0;
}