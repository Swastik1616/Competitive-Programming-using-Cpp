// Problem Link - https://www.codechef.com/START242D/problems/EARLYWIN

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        string a,b,ans = "";
        cin >> a;
        cin >> b;
        int p1=0,p2=0;
        while(p1<n && p2<m){
            if(a[p1]==b[p2]){
                ans += a[p1];
                p1++;
                p2++;
            }
            else break;
        }
        cout << ans << "\n";
    }
}
