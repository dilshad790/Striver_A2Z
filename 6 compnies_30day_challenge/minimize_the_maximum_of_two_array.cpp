#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Your code here
    int n1, n2, div1, div2;
    cin >> div1 >> div2;
    cin >> n1 >> n2;

    vector<int> v1;
    vector<int> v2;

    int maxi_size = max(n1, n2);
    int maxi_div = max(div1, div2);

    int num = 1;
    while (v1.size() != n1)
    {

        if (num % div1 != 0)
        {
            v1.push_back(num);
            num++;
        }
    }

    num=1;
    while(v2.size()>=n2)
    {
        if(num%div2!=0)
        { bool x=false;
            for(int i=0; i<n1; i++)
            {
                if(num==v1[i])
                x=true;
            }
            if(x==false)
            v2.push_back(num);
            num++;
        }

    }


    for(int i=0; i<v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
cout<<endl;
    for(int i=0; i<v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }
    return 0;
}
