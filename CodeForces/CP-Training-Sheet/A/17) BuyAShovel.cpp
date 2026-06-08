// Problem Link - https://codeforces.com/contest/732/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k,r,ans=1;
    cin >> k >> r;
    while(1){
        if(k*ans%10==0 || ((k*ans)-r)%10==0) break;
        else ans++;
    }
    cout << ans << "\n";
    return 0;
}