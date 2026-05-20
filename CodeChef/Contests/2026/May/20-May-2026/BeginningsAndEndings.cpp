// Problem Link - https://www.codechef.com/START239D/problems/EQBEND

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n);
        int ans = INT_MAX;
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        if(v[0]==v[n-1]) cout << "0\n";
        else {
            int c;
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(v[i]==v[j]){
                        c = i + (n-1-j);
                        ans = min(ans,c);
                    }
                }
            }
            if(ans!=INT_MAX) cout << ans << "\n";
            else cout << "-1\n";
        }

    }
}