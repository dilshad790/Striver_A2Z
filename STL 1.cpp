#include <iostream>
#include <array>
using namespace std;

int main()
{
array <int,4> var={1,2,3,4};
cout<<var.at(2)<<endl;
cout<<var[3]<<endl;
cout<<var.front()<<endl;
cout<<var.back()<<endl;
/* cout<<var.fill(5);
for(int i=0; i<4; i++);
cout<<var[i];

*/



return 0;
}

