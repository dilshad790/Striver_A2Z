#include<iostream>
using namespace std;
int main()
{             /* print 
*
**
***
****
*****
*/
for(int i=1; i<=5; i++)
{
    for(int j=1; j<=i; j++)
    {
        cout<<"*"<<" ";
    }
    cout<<endl;
}
 return 0;
}