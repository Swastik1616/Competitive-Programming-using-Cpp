// Problem Link - https://codeforces.com/problemset/problem/1829/B

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

// void solve(){
//     int n;
//     cin >> n;
//     vector<int> v(n),temp;
//     for(auto &it:v) cin >> it;
//     int c = 0;
//     for(auto it:v){
//         if(it==0) c++;
//         else c = 0;
//         temp.push_back(c);
//     }
//     int ans = 0;
//     for(auto it:temp) ans = max(ans,it);
//     cout << ans << "\n";
// }

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &it:v) cin >> it;
    int c = 0,ans = 0;
    for(auto it:v){
        if(it==0) c++;
        else c = 0;
        ans = max(ans,c);
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