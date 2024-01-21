#include<iostream>
using namespace std;
void selection_sort(int &arr[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        int minIndex=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[minIndex])
            minIndex=j;
        }
        swap(arr[minIndex],arr[i]);
    }
}
int main()
{
    int arr[2,5,4,6,3,7];
    cout<<selection_sort(arr,6);
 return 0;
}