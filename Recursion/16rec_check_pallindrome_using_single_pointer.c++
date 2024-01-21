#include<iostream>
using namespace std;
bool checkPalindrome(string& str,int i)
{
    if(i >= str.size()/2)
    return true;

    if(str[i] !=str[str.length()-i-1]);  ??????
    return false;

return checkPalindrome(str,i+1);

}
int main()
{
    string name="madam";
    cout<<checkPalindrome(name,0); 
 return 0;
}