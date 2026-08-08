// Problem Link - https://codeforces.com/contest/2253/problem/B
//wa
#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define vin for(auto &it:v) cin >> it

void solve(){
    int n;
    cin >> n;
    vi v(n),temp;
    vin;
    int c1 = 1, c2 = 0;
    for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1]){
            c1 = 0;
            break;
        }
    }
    if(c1){
        cout << n << "\n";
        return;
    }
    int c3 = 1;
    map<int,int> mp;
    for(auto it:v) mp[it]++;
    for(auto it:mp) temp.push_back(it.ss);
    for(auto it:mp){
        if(it.ss&1){
            c3 = 0; 
            break;
        }
    }
    if(c3){
        cout << n << "\n";
        return;
    }
    if(mp.size()==1){
        cout << "1\n"; 
        return;
    }
    int s = n, l = 0;
    for(auto it:temp){
        s = min(s,it);
        l = max(l,it);
    }

    for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1]){
            c2++;
        }
    }
    if(l-s<=1 && c2==1){
        cout << n << "\n";
        return;
    }
   // else if(l-s==2) cout << l - 1 << "\n";
    else if(l-s>1 && c2<=2) cout << n - 1 << "\n";
    else if(l-s>1) cout << l - s << "\n";
    else cout << n - 1 << "\n";
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