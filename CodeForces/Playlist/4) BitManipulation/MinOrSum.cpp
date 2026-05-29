// Problem Link - https://codeforces.com/problemset/problem/1635/A
/* if we take 2 numbers a,b and we want to replace them with 2
other numbers x,y such that a|b = x|y, this simply means that we
want the final position of set bits of their result to be the same,
now if a=2(010),b=3(011) then a|b = 3(011), so if we take x=3,y=0 then
x|y=3, and now if see see a+b = 5 and x+y = 3, so we have clearly reduced
their sum, so if we want to reduce the sum of overall array, then we can 
simple do Orring of all of them and the result will be the minimum sum.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = 0;
        for(int i=0;i<n;i++){
            long long x;
            cin >> x;
            ans |= x;
        }
        cout << ans << "\n";
    }
    return 0;
}