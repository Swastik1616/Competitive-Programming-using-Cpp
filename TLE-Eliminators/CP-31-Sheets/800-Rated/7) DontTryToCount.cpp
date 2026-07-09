// Problem Link - https://codeforces.com/problemset/problem/1881/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

bool checkSubstring(string x, string s, int n, int m){
    int i=0,j=0;
    while(i<n && j<m){
        if(x[i]==s[j]){
            i++;
            j++;
        }
        else{
            i = i - j + 1;
            j=0;
        }
    }
    if(j==m) return true;
    return false;
}

void solve(){
    int n,m;
    cin >> n >> m;
    string x,s;
    cin >> x >> s;
    if(checkSubstring(x,s,n,m)) cout << "0\n";
    else{
        int ans = -1;
        for(int i=1;i<=5;i++){
            x += x;
            n += n;
            if(checkSubstring(x,s,n,m)){
                ans = i;
                break;
            }
        }
        cout << ans << "\n";
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