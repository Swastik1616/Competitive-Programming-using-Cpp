// Problem Link - https://codeforces.com/contest/2236/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n,m=INT_MAX,M=0;
        cin >> n;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            m = min(m,x);
            M = max(M,x);
        }
        cout << M - m + 1 << "\n";
    }
    return 0;
}