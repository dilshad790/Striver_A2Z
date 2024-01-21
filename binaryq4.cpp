/* #include <iostream>
using namespace std;


int main()
{


return 0;
}
*/
#include <iostream>
using namespace std;
int fun(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
       if( arr[i]^arr[i+1]==1);
      { return arr[i];}

if(arr[i]^arr[i+1]==0)
{
    return -1;
}
    
    } 
}

int main()
{
    int arr[7]={3,4,5,2,3,5,4};
    int index=fun(arr,7);
    cout<<"unique elemnt is "<<index;
}
