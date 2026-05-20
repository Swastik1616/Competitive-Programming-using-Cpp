// Problem Link - https://www.codechef.com/START239D/problems/EZSPK

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c = 0;
        for(int i=0;i<n;i++){
            if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
                c++;
                if(c>=4) break;
            }
            else c = 0;
        }
        if(c>=4) cout << "YES\n";
        else cout << "NO\n";
    }
}