#include<bits/stdc++.h>
using namespace std;
int main(){
    int fibo;
    int prev2 = 0;
    int prev1 = 1;
    cout << prev2 << " " << prev1 <<" ";
    for (int i = 0; i < 18; i++)
    {
        fibo = prev1 + prev2;
        cout << fibo << " ";
        prev2 = prev1;
        prev1 = fibo;
    }
    // cout << "Hello World";
    
    return 0;
}