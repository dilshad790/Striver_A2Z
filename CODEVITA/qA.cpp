#include <bits/stdc++.h>
using namespace std;

const long long  N = 1e10 - 1;
bool isPrime(int n)
{
    for (int i = 2; i < sqrt(n); i++)
    { 
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    // Your code here
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int mini = v[0];
    // int prime;
    int ans;
    for (int i = 2; i < sqrt(N); i++)
    {

        bool check = isPrime(i);
        if (check == 1)
        {
            bool divisible = false;
            for (int j = 1; j < v.size(); j++)
            {
                if (i % v[i] == mini)
                    divisible = true;
                else
                {
                    divisible = false;
                    break;
                }
            }
            if (divisible==true)
            {

            ans=i;
            break;
            }
            else continue;

        }
    }
cout<<ans;
    return 0;
}