#include<iostream>
using namespace std;
int partition(int arr[],int s,int e)
{
    int pivot=arr[s];

    int count=0;
    for(int i=s+1; i<=e; i++)
    {
        if(arr[i]<=pivot)
        count++;
    }
int pivotIndex=s+count;
swap(arr[pivotIndex],arr[s]);

int i=s,j=e;
while(i<pivotIndex && j>pivotIndex)
{
    while(arr[i]<=pivot)
    {
        i++;
    }
    while(arr[j]>pivot)
    {
        j--;
    }
    if(i<pivotIndex && j>pivotIndex)
    swap(arr[i++],arr[j++]);
}

return pivotIndex;
}
void Quick_Sort(int arr[],int s,int e)
{
    // Base Case
    if(s>=e)
    return;

    // partition
   int p=partition(arr,s,e);
    Quick_Sort(arr,s,p-1);
    Quick_Sort(arr,p+1,e);


}
int main()
{
    int arr[5]={4,2,5,1,3};
    int n=5;
    Quick_Sort(arr,0,n-1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
 return 0;
}