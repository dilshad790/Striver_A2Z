#include <iostream>
using namespace std;
template <class X> 
X big(X a,X b){
	if(a>b)
	return a;
	return b;// X is called place Holder
	
}

int main()
{
cout<<big(3,4)<<endl;
cout<<big(3.4,5.5);

return 0;
}

