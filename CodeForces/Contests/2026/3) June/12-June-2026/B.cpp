// Problem Link - https://codeforces.com/contest/2236/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cc = 0;
        for(int i=0;i<k;i++){
            int c = 0;
            for(int j=i;j<n;j+=k){
                if(s[j]=='1') c++;
            }
            if(c%2){
                cc = 1;
                cout << "NO\n";
                break;
            }
        }
        if(cc==0)cout << "YES\n";
    }
    return 0;
}