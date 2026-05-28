// Problem Link - https://codeforces.com/problemset/problem/579/A
// brian's algo, just count the number of set bits in the number
// if doubt check bit manipulation blog on cp algos

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;

    int ans = 0;
    while(x){
        x = x & (x-1);
        ans++;
    }

    cout << ans << "\n";
    
    return 0;
}