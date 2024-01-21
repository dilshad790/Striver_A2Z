#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
map<int,int>mpp1;
cout<<"Initial me zero hota hai:"<<mpp1[0]<<endl;
cout<<sizeof(mpp1);

    map<string,int>mpp;
    mpp["One"]=1;
    mpp["Two"]=2;
    mpp["Three"]=3;

    // for(auto it :mpp)
    // {
    //     cout<<it.first<<it.second<<endl;
    // }

mpp.insert(make_pair("Mango",100));

pair<string,int>p;
p.first="Apple";
p.second=120;
mpp.insert(p);

// for(auto it:mpp)
// {
//     if()
// }
 return 0;
}