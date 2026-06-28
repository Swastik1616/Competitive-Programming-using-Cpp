// Problem Link - https://codeforces.com/contest/318/problem/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k;
    cin >> n >> k;
    ll odds = (n+1)/2;
    if(k<=odds) cout << 2*k - 1;
    else{
        k -= odds;
        cout << 2*k;
    }
    
    return 0;
}