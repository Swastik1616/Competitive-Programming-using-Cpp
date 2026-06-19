/* Problem - given an array and two indices l & r, calculate
the sum of all values from l to r (optimised)
*/

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    cin >> n >> q;
    vector<int>v(n),pre(n);
    for(auto &it:v) cin >> it;
    pre[0] = v[0];
    for(int i=1;i<n;i++) pre[i] = pre[i-1] + v[i];

    while(q--){
        int l,r;
        cin >> l >> r;
        (l==0) ? cout << pre[r] << "\n" : cout << pre[r] - pre[l-1] << "\n";
    }

    return 0;
}

/* Sample i/p ------  o/p
    5 3     
    1 2 3 4 5
    0 4               15
    2 4               12
    1 3               9
*/