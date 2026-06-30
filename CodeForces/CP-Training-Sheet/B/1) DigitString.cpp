// Problem Link - https://codeforces.com/problemset/problem/2230/B

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
        string s;
        cin >> s;
        ll n = s.size();
        ll c4 = 0;
        ll ans = 0;
        ll c2 = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='4') c4++;
            if(s[i]=='2') c2++;
        }
        ll r = c2;
        ll l = 0;
        ans = c2;
        for(int i=0;i<n;i++){
            if(s[i]=='4') continue;
            if(s[i]=='2') r--;
            else l++;
            ans = min(ans,l+r);
        }
        cout << c4 + ans << "\n";
    }
    return 0;
}