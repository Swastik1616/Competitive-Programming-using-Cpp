// Problem Link - https://codeforces.com/problemset/problem/1834/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &it:v) cin >> it;

    int pc=0,nc=0,ans=0;
    for(auto it:v){
        if(it==1) pc++;
        else nc++;
    }

    while(pc<nc || nc&1){
        pc++;
        nc--;
        ans++;
    }

    cout << ans << "\n";
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