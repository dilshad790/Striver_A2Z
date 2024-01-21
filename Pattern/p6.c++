#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=6-i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
int main()
{
int n=5;

pattern(n);
 return 0;
}