// Problem Link - https://codeforces.com/contest/2231/problem/B
// upsolved
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }

        int m = 0;
        for(int i=1;i<n;i++){
            if(v[i]<v[i-1]) m = max(m,v[i-1]-v[i]);
        }
        for(int i=1;i<n;i++){
            if(v[i]<v[i-1]) v[i] += m;
        }
        int c = 1;
        for(int i=1;i<n;i++){
            if(v[i]<v[i-1]) c = 0;
        }

        if(c) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}