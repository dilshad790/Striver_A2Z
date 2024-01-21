#include <iostream>
using namespace std;
int sqroot(int n)
{
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	int ans=0;
	while(s<=e)
	{
		if(mid*mid>n)
		{
			e=mid-1;
			ans=mid;
		}
		else if(mid*mid<n){
			s=mid+1;
			ans=mid;
		}
		
		else if(mid*mid==n)
		{
			return mid;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}

int main()
{


cout<<sqroot(36);




return 0;
}

