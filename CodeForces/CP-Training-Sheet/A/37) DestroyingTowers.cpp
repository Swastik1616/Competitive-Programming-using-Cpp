// Problem Link - https://codeforces.com/problemset/problem/2237/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(auto &it:v) cin >> it;
        if(n==1) cout << v[0] << "\n";
        else{
            int ans = 0;
            for(int i=0;i<n-1;i++){
                if(v[i]<v[i+1]) v[i+1] = v[i];
            }
            for(auto it:v) ans += it;
            cout << ans << "\n";
        }
    }
    return 0;
}