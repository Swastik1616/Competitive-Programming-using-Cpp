// Problem Link - https://codeforces.com/problemset/problem/1904/A

#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define vin for(auto &it:v) cin >> it

int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

void solve(){
    long long a, b; 
    cin >> a >> b;
    long long x_king, y_king; 
    cin >> x_king >> y_king;
    long long x_queen, y_queen; 
    cin >> x_queen >> y_queen;

    set<pair<int, int>> king_hits, queen_hits;

    for (int j = 0; j < 4; j++)
    {
        king_hits.insert({x_king + dx[j] * a, y_king + dy[j] * b});
        king_hits.insert({x_king + dx[j] * b, y_king + dy[j] * a});

        queen_hits.insert({x_queen + dx[j] * a, y_queen + dy[j] * b});
        queen_hits.insert({x_queen + dx[j] * b, y_queen + dy[j] * a});
    }

    int ans = 0;
    for (auto it : king_hits) if (queen_hits.find(it) != queen_hits.end()) ans++;
    cout << ans << endl; 
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