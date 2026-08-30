// Problem Link - https://codeforces.com/contest/490/problem/A

#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pair<int,int>> 

void solve(){
  int n, x;
  vi a[4];
  cin >> n;
  for(int i=1;i<=n;i++){
    cin >> x;
    a[x].push_back(i);
  }
  
  int ans = min(a[1].size(), min(a[2].size(), a[3].size()));
  cout << ans << endl;
  for (int i = 0; i < ans; i++)
    cout << a[1][i] << ' ' << a[2][i] << ' ' << a[3][i] << endl;
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