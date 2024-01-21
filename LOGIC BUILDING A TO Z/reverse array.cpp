#include<iostream>
using namespace std;

int main()
{

int a[20],i,j,rev[20];
cout<<"enter size of array:";
int size;
cin>>size;
cout<<"enter element in array:";

for(i=0; i<size; i++ )
{
	cin>>a[i];
	cout<<a[i];
}
cout<<endl;
for( j=size-1; j>=0; j--)
{
	
	rev[j]=a[j];
	cout<<rev[j];

}
cout<<endl;
if(rev[j]==a[i])
cout<<"PERFECT"<<endl;
else
cout<<"NOT PERFECT"<<endl;
}

