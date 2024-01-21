#include<iostream>
using namespace std;
// void decimal_To_Binary(int n)
// {
    // int i=0;
    // int ans[32];
    // while(n>0)
    //    { 
        // ans[i]=n%2;
        // n=n/2;
        // i++;
    // }
    // for (int j = i - 1; j >= 0; j--)
    //   {  cout << ans[j];
    //   }
    // 
// }
// 

void decimal_to_Binary(int n)
{ 
    // here we are using for printing 11bit
    for(int i=10; i>=0; i--)
    {
        cout<<((n>>i)&1);
    }
   cout<< endl;
}
int main()
{
    int n=5;
//     cout<<c<<endl;
// if(c&1)
// cout<<"1"<<endl;
// else cout<<"0"<<endl;;
// cout<<(n&1);
    // decimal_To_Binary(n);
    decimal_to_Binary(n);

    int pos=1;

// get bit
decimal_to_Binary((n&(1<<pos))!=0);

    // set bit
    decimal_to_Binary(n|(1<<pos));
    // unset bit
    decimal_to_Binary(n&(~(1<<pos)));

decimal_to_Binary(n^(1<<pos));

// Bit Count -set bit
int n2=8;
int cnt=0;
for(int i=31; i>=0; --i)
{
    if((n2& (1<<i))!=0)
    cnt++;
}
cout<<cnt;
 return 0;
}