#include<iostream>
using namespace std;
// swap alternate
void SwapAlt(int ar[],int s)
{
	for(int i=0; i<s; i+=2 )
	{
		if(i+1<s)
		swap(ar[i],ar[i+1]);
		
	}
	
}
int printar(int a[],int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<a[i]<<" ";
	}
}

int main()
{
cout<<"Enter size of array :"<<endl;
int size;
cin>>size;
cout<<"Enter element in array :"<<endl;
int arr[100];
for(int i=0; i<size; i++)
{
	cin>>arr[i];
	}
SwapAlt(arr,size);
printar(arr,size);

}

