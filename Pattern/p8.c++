#include<iostream>
using namespace std;
void pattern(int n)
{
    for(int i=0; i<n; i++){

        // for space
        for(int j=0; j<=i; j++)
        {
            cout<<" ";
        }

        for(int k=0; k<9-2*i; k++){
            cout<<"*";
        }

        for(int j=0; j<=i; j++)
        {
            cout<<" ";
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