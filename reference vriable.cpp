#include <iostream>
using namespace std;
int main()
{
	int x=10;
	int &p=x;
	p++;
	cout<<p;
}
