#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if((i%3!=0 && j%3!=0 && k%3!=0) && (i+j+k==n))
                {
                v.push_back(i);
                v.push_back(j);
                v.push_back(k);
                }
            }
        }
    }
    
    if(v.size()>3)
    { cout<<"YES"<<endl;
        for(int i=0; i<3; i++)
        {
            cout<<v[i]<<" ";
        }
    }
    else if(v.size()==3)
    cout<<"YES"<<endl;

    else cout<<" NO";
}
    return 0;
}