#include <iostream>
using namespace std;


int main(){
bool arr[4]={2,3,4,5};
arr[1]=arr[2]=false;
for(int i=0; i<4; i++)
{
	cout<<arr[i];
}



return 0;
}

