#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    int t;
    cin>>t;
    while(t--)
    {
        char arr[8][8];
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                cin>>arr[i][j];
            }
        }
string ans;

for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                // cin>>arr[i][j];
                if(arr[i][j]>=97 && arr[i][j]<=122)
                ans.push_back(arr[i][j]);

            }
        }
    cout<<ans<<endl;
    }
    return 0;
}