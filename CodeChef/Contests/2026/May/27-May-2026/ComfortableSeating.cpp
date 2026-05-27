// Problem Link - https://www.codechef.com/START240D/problems/CYCYC

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<int>a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        
        sort(a.begin(),a.end());

        if(a[0]==a[1] || a[0]>a[n-1]) cout << "YES\n";
        else cout << "NO\n";
    }
}
