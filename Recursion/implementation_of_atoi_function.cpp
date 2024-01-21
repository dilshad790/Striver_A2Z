#include <bits/stdc++.h>
using namespace std;
int atoifun(string s)
{
    int i = 0;
    int n = s.size();
    while (s[i] == ' ')
    {
        i++;
    }

    bool positive = s[i] == '+';
    bool negative = s[i] == '-';

    positive == true ? i++ : i;
    negative == true ? i++ : i;

    double num = 0;
    while (i < n && s[i] >= '0' && s[i] <= '9')
    {
        num = num * 10 + (s[i] - '0');
        i++;
    }

    num=negative?-num:num;

if(num>INT_MAX) 
    return INT_MAX;

    if(num<INT_MIN)
    return INT_MIN;

    return int(num);
}
int main()
{
    // Your code here

    string s;
    cout << "Enter string:";
    cin >> s;
    cout << s << endl;
    cout << atoifun(s);

    return 0;
}