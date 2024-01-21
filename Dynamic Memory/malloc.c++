#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{int *ptr=(int*)malloc(2*sizeof(int));
cout<<"Enter the two number:"<<endl;
for(int i=0; i<2; i++)
{
cin>>*(ptr+i);
}

for(int i=0; i<2; i++)
{
    cout<<*(ptr+i)<<" ";
}


 return 0;
}