#include <iostream>
using namespace std;
int uniquearr(int arr[], int size)
{
	int i,j,count=0;
	for(i=0; i<size; i++)
	{
		for(j=0; j<size; j++){
		
		if(i!=j && arr[i]==arr[j]){
			count++;
		}
	
	
	
}
if(count==0)
{
	return arr[i];
}
	
	}
	
}

int main()
{
int odd[5]={3,3,5,7,7};
int index=uniquearr(odd,5);
cout<<"Unique element in the array is :"<<index<<endl;





return 0;
}

