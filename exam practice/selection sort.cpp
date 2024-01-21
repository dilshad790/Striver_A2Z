#include<stdio.h>
int selectionsort(int a[],int size)
{
    for(int i=0; i<size-1; i++)
    {
        int minindex=i;
        for(int j=i+1; j<size; j++)
        {
            if(a[minindex]<a[j])
            minindex=j;
        }
swap(a[minindex],a[i]);
    }
}
int print(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d",arr[i]);
    }
}
int main()
{
    int arr[5]={7,8,5,9,1};
    selectionsort(arr,5);
print(arr,5);
}
