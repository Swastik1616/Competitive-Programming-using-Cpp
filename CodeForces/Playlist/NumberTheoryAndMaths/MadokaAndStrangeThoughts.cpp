// Problem Link -https://codeforces.com/problemset/problem/1717/A


// lcm(a,b) = x
// gcd(a,b) = y
// x/y <=3 -> 1,2,3
// x/y=1 -> lcm=gcd -> a=b -> n such pairs
// x/y=2 -> lcm = 2*gcd -> a=2b or b=2a -> 2*(n/2) such pairs
// x/y=3 -> lcm = 3*gcd -> a=3b or b=3a -> 2*(n/3) such pairs

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
        cout << n + 2*(n/2) + 2*(n/3) << "\n";
    }
    return 0;
}