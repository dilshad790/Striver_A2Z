#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
// Result: 14 (Multiplication has higher precedence)
int result = 2 + 3 * 4;
cout<<result<<endl;

// Result: true (Logical AND has higher precedence than Logical OR)
bool a = true, b = false;
bool result2 = a && b || true;
cout<<result2<<endl;


    return 0;
}