// Problem Link - https://codeforces.com/contest/2241/problem/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        if(x%y==0) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}