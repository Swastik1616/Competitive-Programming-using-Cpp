// Problem Link - https://codeforces.com/problemset/problem/1853/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

bool isSorted(vector<int>&v, int n){
    for(int i=1;i<n;i++){
        if(v[i-1]>v[i]) return false;
    }
    return true;
}
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &it:v) cin >> it;

    if(!isSorted(v,n)) cout << "0\n";
    else{
        int diff = INT_MAX;
        for(int i=1;i<n;i++){
            diff = min(diff,v[i]-v[i-1]);
        }
        cout << diff/2 + 1 << "\n";
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