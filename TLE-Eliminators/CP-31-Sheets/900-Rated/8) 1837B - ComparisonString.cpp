// Problem Link - https://codeforces.com/problemset/problem/1837/B

#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define vin for(auto &it:v) cin >> it

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c1 = 0, c2 = 0;
    for(auto it:s){
        if(it=='<'){
            c1++;
        }
        else c1 = 0;
        c2 = max(c1,c2);
    }
    c1 = 0;
    for(auto it:s){
        if(it=='>'){
            c1++;
        }
        else c1 = 0;
        c2 = max(c1,c2);
    }
    cout << c2 + 1 << "\n";
    
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

    TCs();
    //solve();
    
    return 0;
}