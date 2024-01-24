#include <bits/stdc++.h>
using namespace std;

int maxSumSub(vector<int> &v)
{
    int mini = INT_MAX;
    int curr_sum = 0;
    int total_sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        total_sum += v[i];
        curr_sum += v[i];
        mini = min(mini, curr_sum);

        if (curr_sum > 0)
            curr_sum = 0;
    }

cout<<mini<<endl;
cout<<total_sum<<endl;
    int maxi = INT_MIN;
    curr_sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        curr_sum+=v[i];
        maxi=max(maxi,curr_sum);

    }
if(maxi<0)
cout<<maxi<<endl;

cout<<maxi<<endl;
    cout<<max((total_sum-mini),maxi);
}
int main()
{
    // Your code here
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    maxSumSub(v);

    

    return 0;
}