// Problem Link - https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

ll fact(int n){
    if(n<=1) return 1;
    return n*fact(n-1);
}

void solve(){
    int n;
    cin >> n;
    cout << fact(n);
}

void TCs(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //TCs();
    solve();
    
    return 0;
}