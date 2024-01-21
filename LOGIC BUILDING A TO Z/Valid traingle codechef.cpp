#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	int sum=180;
	while(t--)
	{
		int a,b,c;
	cin>>a>>b>>c;
	    if((a+b+c)==sum)
	    {
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}

