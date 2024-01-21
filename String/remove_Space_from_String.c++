#include<iostream>
#include<string>
#include<stack>
using namespace std;
void rverseString(string &s)
{
    stack<string>st;
    int n=s.size();
    for(int i=0; i<n; i++)
    { string word="";
        while(s[i]!=' ' && i<n)
        {
word+=s[i];
i++;
        }
        st.push(word);
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main()
{
string str="Welcome to Coding Ninjas";
rverseString(str);

 return 0;
}