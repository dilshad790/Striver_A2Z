#include<iostream>
using namespace std;

int main()
{

int n;
cin>>n;
int ar[100];
int count=0;
for(int i=2; i<=n; i++)
{
ar[n]=i;
	
}


for(int j=0; j<n-2; j++)
{
	if(ar[n]%j==0)
	count++;
	else 
	continue;
	}
cout<<count;
return 0;
}

