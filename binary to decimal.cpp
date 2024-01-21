#include <iostream>
#include<math.h>
using namespace std;


int main()
{
int s=0,bin,i=0;
cout<<"Enter binary a number"<<endl;
cin>>bin;
while(bin)
{
s=s+pow(2,i) *(bin%10);
bin=bin/10;
i++;
}
cout<<s;

return 0;
}

