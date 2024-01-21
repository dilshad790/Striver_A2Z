#include <iostream>
using namespace std;

template <class x>
x max1(x a, x b)
{
	if(a>b)
	return a;
	
	else 
	return b;
}
int main()
{
cout<<max1(4,5)<<endl;
cout<<max1(5.5,3.4)<<endl;
cout<<max1('A','C');


return 0;
}

