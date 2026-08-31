// Problem Link - https://codeforces.com/problemset/problem/1904/B

#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pair<int,int>> 
#define vpll vector<pair<ll,ll>>

void solve(){
        ll n; 
		cin >> n;
		vpll v; 

		for(int i=0;i<n;i++){
            ll x;
			cin >> x;
			v.push_back({x, i});
		}

		vll pre(n);
		sort(v.begin(), v.end());

		pre[0] = v[0].ff;
		for(int i=1;i<n;i++){
			pre[i] = pre[i - 1] + v[i].ff;
		}

		vll ans(n);
		for (int i=0;i<n;i++){ 
			int j = i;
			int found = i;
			while (j < n) {
				pair<ll, ll> temp = {pre[j] + 1, INT_MIN};
				ll idx = lower_bound(v.begin(), v.end(), temp) - v.begin();
				idx--;
				if (idx == j) {
					break;
				}
				found += idx - j;
				j = idx;
			}
			ans[v[i].ss] = found;
		}

        for(auto it:ans) cout << it << " ";
		cout << "\n";    
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