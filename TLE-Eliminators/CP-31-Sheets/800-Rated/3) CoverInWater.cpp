// Problem Link - https://codeforces.com/problemset/problem/1900/A

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
        string s;
        cin >> s;
        bool found = false;
        for(int i=0;i<=n-3;i++){
            if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){
                found = true;
                break;
            }
        }
        int c = 0;
        for(auto it:s) if(it=='.') c++;
        if(found) cout << "2\n";
        else cout << c << "\n";
    }
    return 0;
}