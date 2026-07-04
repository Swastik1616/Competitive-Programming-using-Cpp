// Problem Link - https://codeforces.com/problemset/problem/1901/A

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
        int n,x;
        cin >> n >> x;
        vector<int> a(n);
        for(auto &it:a) cin >> it;
        int ans = a[0];
        a.push_back(x);
        for(int i=1;i<=n;i++){
            int curr = a[i] - a[i-1];
            if(i==n) curr = 2*(a[i] - a[i-1]);
            ans = max(ans,curr);
        }
        cout << ans << "\n";
    }
    
    return 0;
}