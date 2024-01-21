#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    int v[6][6];

    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            cin>>v[i][j];
            // cout<<i<<j<<endl;
        }
        // cout<<endl;
    }

int row=0,col=0;
for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            if(v[i][j]==1)
            {
                row=i;
                col=j;
                // break;
// cout<<row<<col<<endl;
            }
        }


    }
    int ans=0;
    if(row<=3 && col<=3)
    {
        ans=(3-row)+(3-col);
cout<<ans;
    }

    else if(row>3 && col>3)
    {
        ans=(row-3)+(col-3);
cout<<ans;
        
    }

else if(row>3 && col<=3)
{
        ans=(row-3)+(3-col);
cout<<ans;
    
}

else
{

        ans=(3-row)+(col-3);
cout<<ans;
}


    return 0;
}