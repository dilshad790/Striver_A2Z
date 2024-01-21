#include <iostream>
using namespace std;
#define size 3

int main()
{
int i,j,a[size][size];
int *p;
p=&a[0][0];

cout<<"Enter matrix of 3x3:"<<endl;

for(i=0; i<size; i++ )
{
	for(j=0; j<size; j++)
	cin>>a[i][j];
}
/*
for(i=0; i<size; i++ )
{
	for(j=0; j<size; j++){
	
	cout<<" "<<a[i][j];
}
cout<<endl;
}
*/
printf("%d\n",&p);

cout<<&a[0][0];



return 0;
}

