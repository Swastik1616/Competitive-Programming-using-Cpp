// Problem Link - https://codeforces.com/contest/799/problem/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,t,k,d;
    cin >> n >> t >> k >> d;
    int c = (n+k-1)/k; // way to calculate ceil value directly
    if(d<(c-1)*t) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}