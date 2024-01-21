#include <bits/stdc++.h>
using namespace std;
int fun(vector<int> arr)
{
    int j = arr.size() - 1;
    int i = 0;
    int cnt = 0;
    while (i < j)
    {
        // case-1 first + last
        if (arr[i] + arr[j] == arr[i + 1] + arr[j - 1])
        {
                int sum = arr[i] + arr[j];
            if (arr[i] + arr[j] == arr[i + 1] + arr[j - 1] && i < j)
            {

                i++;
                j--;
                cnt++;
            }

            else if(sum==arr[i+1]+arr[i+2])
            {
                i++;
                j--;
                cnt++;

            }
            else if(sum==arr[j-1]+arr[j-2])
            i++;
            j--;
            cnt++;
            // sum=arr[i]+arr[j];
        }

//  case2 
else if(arr[i]+arr[i+1]==arr[i+2]+arr[i+3])
{
    int sum=arr[i]+arr[i+1]
 if(sum==arr[i+1]+arr[i+2])
 {
    i++
 }
    
}

    }
}
int main()
{
    // Your code here
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    fun(v);
    return 0;
}