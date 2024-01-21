#include <bits/stdc++.h>
using namespace std;

vector<int> goodNumber(int a, int b, int digit)
{
    vector<int> v;
    for (int i = a; i <= b; i++)
    {
        int num = i;
        int right = num % 10;
        int sum=right;
        num = num / 10;
        bool gdNum = false;
        while (num != 0)
        {
        cout<<"right sum"<<right<<" "<<sum<<endl;
            int left = num % 10;
            cout<<"left"<<left<<endl;
            if (left > sum && right != digit && left != digit)
            {
                right = left;
                sum+=right;
                gdNum = true;
                num = num / 10;
            }
            else
            { gdNum=false;

                break;
            }
        }
        if (gdNum == true)
            v.push_back(i);
            else 
            continue;
    }
    return v;
}
int main()
{
    // Your code here
   int a,b,digit;
   cin>>a>>b>>digit;
    vector<int> v;
    v = goodNumber(a, b, digit);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}