// Problem Link - https://codeforces.com/contest/686/problem/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,x,d=0;
    cin >> n >> x;
    while(n--){
        char c;
        ll i;
        cin >> c >> i;
        if(c=='+') x+=i;
        else if(i<=x) x-=i;
        else d++;
    }
    cout << x << " " << d << "\n";
    return 0;
}