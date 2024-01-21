#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int low, int high)
{
    int i = low;
    int j = high;
    int pivot = arr[low];
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high)
        {
            i++;
        }

        while (arr[j] > pivot && j >= low)
            j--;

        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pIndex = partition(arr, low, high);
        quickSort(arr, low, pIndex - 1);
        quickSort(arr, pIndex + 1, high);
    }
}
int main()
{
    // Your code here
    int arr[] = {4, 2, 5, 7, 9, 1, 3};
    quickSort(arr, 0, 6);

for(int i=0; i<7; i++)
{
    cout<<arr[i]<<" "<<endl;
}
    return 0;
}