/* Problem - Given an array of n elements and q queries
such that each query takes 3 in l,r,x, you have to add x 
to each element from l to r in all q queries and output
the final array after processing all the queries.
0<=l<r<n-1;
*/

// for revision refer mod1-lec2-1:23:45

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

void bruteForce(vector<ll>&v, ll n){
    ll q;
    cin >> q;
    while(q--){ // each query O(n) time
        ll l,r,x;
        cin >> l >> r >> x;
        for(int i=l;i<=r;i++) v[i] += x;
    }
    for(auto it:v) cout << it << " ";
}

void differenceArrayApproach(vector<ll>&v, ll n){ // SC - O(n) - changing vector is not allowed
    vector<int> diff(n,0);
    ll q;
    cin >> q;
    while(q--){ // each query O(1) time
        ll l,r,x;
        cin >> l >> r >> x;
        diff[l] += x;
        if(r!=n-1) diff[r+1] -= x;
    }
    for(int i=1;i<n;i++) diff[i] += diff[i-1]; // prefix sum of Difference Array
    for(int i=0;i<n;i++) cout << v[i] + diff[i] << " "; // adding difference array to orignial array
    //for(auto it:v) cout << it << " ";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> v(n);
    for(auto &it:v) cin >> it;
    //bruteForce(v,n);
    differenceArrayApproach(v,n);
    return 0;
}