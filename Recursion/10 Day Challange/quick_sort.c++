#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s+1; i <= e; i++)
    {
        if (arr[i] <= pivot)
            cnt++;
    }

    int pivotIndex=s+cnt;
    swap(arr[pivotIndex],arr[s]);

    int i=s; 
    int j=e;

    while(i<pivotIndex && j>pivotIndex)
    {
        // if(arr[i]> pivot && arr[j]<pivot)
        // swap(arr[i++],arr[j--]);

        while(arr[i]<pivot){

        i++;
        }

        while(arr[j]>pivot)
        {

        j--;
        }

        if(i<pivotIndex && j>pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
return pivotIndex;

}
void quickSort(int arr[], int s, int e)
{
    if (s >= e)
        return;

    int p = partition(arr, s, e);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}
int main()
{
    // Your code here
    int arr[6] = {2, 6, 8, 9,9,9};
cout<<" sb thk hai"<<endl; 
    quickSort(arr, 0, 5);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}