// Problem Link - https://codeforces.com/contest/2240/problem/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int setB(ll n){
    int s =  0;
    while(n){
        n &= (n-1);
        s++;
    }
    return s;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        if(k==1) cout << setB(n) * k << "\n";
        else if(n <= k) cout << n << "\n";
        else{
            n/=k;
            cout << setB(n) * k << "\n";
        }
    }
    return 0;
}