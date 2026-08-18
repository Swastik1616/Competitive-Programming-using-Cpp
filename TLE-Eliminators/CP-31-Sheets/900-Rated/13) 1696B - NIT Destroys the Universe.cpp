// Problem Link - https://codeforces.com/problemset/problem/1696/B

#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>

void solve(){
    int n;
    cin >> n;
    vi v(n),v2;
    for(auto &it:v) cin >> it;
    int i=0,c=0,j=0,ans=0;
    while(i<n && j<n){
        if(v[i]==0){
            i++;
            j++;
        }
        else{
            while(j<n && v[j]!=0) j++;
            c++;
            v2.push_back(c);
            i = j + 1;
            j++;
        }
    }
    if(v2.size()==0) cout << "0\n";
    else{
        for(auto it:v2) ans = max(ans,it);
        if(ans==1) cout << ans << "\n";
        else cout << "2\n";
    }
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