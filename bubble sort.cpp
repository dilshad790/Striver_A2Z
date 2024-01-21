
#include<iostream>
using namespace std;
int bubblesort(int arr[],int n)
{
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]);
            }
        }
    }
}
int printfun(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
    	cout<<arr[i];
	}
}
int main()
{
int arr[8]={5,3,1,9,8,2,4,7};
bubblesort(arr,8);
cout<<"Sorted array =";
printfun(arr,8);
 return 0;
}
