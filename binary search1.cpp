#include <iostream>
using namespace std;
int binarysearch(int arr[],int size,int key)
{
	int start=0;
	int end =size-1;
	int mid=(start+end)/2;
	
	while(start<=end)
	{
		if(arr[mid]==key){
		
		return mid;}
		
		 if(key>arr[mid]){
		start=mid+1;
	}
		else{
			end=mid-1;
		}
		mid=(start+mid)/2;
	}
	return -1;
}

int main()
{
int odd[5]={4,6,7,11,12};
int even[6]={2,4,6,8,10,12};

int index=binarysearch(even,6,8);
int oddarr=binarysearch(odd,5,12);

cout<<"index of 12 is"<<oddarr;
cout<<"index of 8 is "<<index;
return 0;
}

