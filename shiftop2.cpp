#include <iostream>
using namespace std;

int main()
{
	int x = 19;
	unsigned long long y = 19;
	cout <<"x << 1 = " << (x << 1) << endl;// x=x*(2^1)
	cout <<"x >> 1 = " << (x >> 1) << endl;// x=x/(2^1)
	// shift y by 61 bits left
	cout <<"y << 61 = " << (y << 61) << endl;
	return 0;
}


  
