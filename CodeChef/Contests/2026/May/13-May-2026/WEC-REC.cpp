// Problem link - https://www.codechef.com/START238D/problems/WECREC

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,x,k;
        cin >> n >> x >> k;
        
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        
        sort(v.begin(),v.end(),greater<>());
        
        int ans = 0;
        int cl = 1;
        int curr = v[0];
        for(int i=0;i<n;i++){
            if(v[i]!=curr) cl++;
            curr = v[i];
            if(ans<x && cl<=k) ans++;
        }
        
        cout << ans << "\n";
    }
}