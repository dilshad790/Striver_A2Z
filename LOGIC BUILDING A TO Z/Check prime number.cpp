#include<iostream>
using namespace std;

int main()
{

int n;
cin>>n;
bool prime=true;
for(int i=2; i<n; i++)
{
	if(n%i==0)
	prime=0;
	break;
}
if(prime==0)
{
	cout<<" not a Prime number"<<endl;
	
}
else
{
	cout<<" a prime number"<<endl;
}

}

