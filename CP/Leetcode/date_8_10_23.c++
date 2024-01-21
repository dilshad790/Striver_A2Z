#include <iostream>
using namespace std;
 int differenceOfSums(int n, int m) {
        int num1=0;
        int num2=0;
        for(int i=1; i<=n; i++ )
        {
            if(i%m==0)
                num2+=i;
            
            else num1+=i;
        }
        int ans=num1-num2;
        cout<<num1<<endl;
        cout<<num2<<endl;
        return ans;
    }
int main() {
    // Your code here
    int n=1;
    int m=1;
    cout<<differenceOfSums(n,m)<<endl;
    return 0;
}