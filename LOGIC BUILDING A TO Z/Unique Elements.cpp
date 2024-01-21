#include<iostream>
using namespace std;
int unique(int ar[],int s)
{
	int i,j;
	for( i=0; i<s; i++)
	{
		for( j=0; j<s; j++)
		{
			if(ar[i]==ar[j] && i !=j)
			{
			break;
			}
			
			}
			if(j==s){
				cout<<ar[i];
		}
	}
	return -1;
}

int main()
{
int ar[100];
cout<<"Enter size of array :";
int size;
cin>>size;
cout<<"enter element in array:";
for(int i=0; i<size; i++)
{
	cin>>ar[i];
}
unique(ar,size);
}

