// Problem Link - https://codeforces.com/contest/742/problem/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    if(n==0) cout << "1\n";
    else if(n%4==1) cout << "8";
    else if(n%4==2) cout << "4\n";
    else if(n%4==3) cout << "2\n";
    else cout << "6\n";
    return 0;
}