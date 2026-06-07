// Problem Link - https://codeforces.com/contest/2234/problem/A

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
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        sort(v.begin(),v.end(),greater<>());
        if(n==2) cout << v[0] << " " << v[1] << "\n";
        else{
            int c = 1;
            for(int i=2;i<n;i++){
                if(v[i-2]%v[i-1]!=v[i]){
                    c = 0;
                    cout << -1 << "\n";
                    break;
                }
            }
            if(c) cout << v[0] << " " << v[1] << "\n";
        }
    }
    return 0;
}