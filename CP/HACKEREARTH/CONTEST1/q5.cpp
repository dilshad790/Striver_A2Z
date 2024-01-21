#include <iostream>

using namespace std;

int main()
{

    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            sum =sum+ (int)((s[i] - 'a') + 'A');
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            sum =sum +(int)((s[i] - 'A') + 'a');
        }
    }
    // cout << sum << endl;
    if (sum < 0)
        cout << -1 * sum << endl;
    bool flag=false;
        
      for (int i = 2; i < sum; i++)
        {
            if (sum % i == 0)
            {
                // cout<<0<<endl;
                flag=true;
                break;
            }
        }

    if(flag==true)
     cout<<0;
     else cout<<1;
    
}
