// Problem Link - https://codeforces.com/contest/2232/problem/A
// WA during contest
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
        for(int i=0;i<n;i++) cin >> v[i];

        sort(v.begin(),v.end());
        int m = v[n/2];
        
        int lc=0,rc=0;
        for(int i=0;i<n;i++){
            if(v[i]<m) lc++;
            else if(v[i]>m) rc++;
        }

        cout << max(lc,rc) << "\n";
    }
    return 0;
}