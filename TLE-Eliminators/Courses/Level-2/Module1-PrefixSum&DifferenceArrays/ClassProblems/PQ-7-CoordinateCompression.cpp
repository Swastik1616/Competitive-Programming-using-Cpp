/* Problem -  
Given an array arr of size n, containing integers 
from 1 to 1e12 , compress them to numbers 
ranging from 1 to 1e6. 1<=n<=2e5 , such that
if a[i] < a[j] in original array then it is preserved
*/
// simply sort the array and map each to their indices

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

void solve(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(auto &it:v) cin >> it;
    sort(v.begin(),v.end());
    
    map<ll,ll> mp;
    for(int i=0;i<n;i++){
        mp[v[i]] = i;
    }
    for(auto it:mp) cout << it.ff << " -> " << it.ss << "\n";
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