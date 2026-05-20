// Problem link - https://www.codechef.com/START239D/problems/MIRRIM

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        int l = 0;
        int r = n - 1;
        int c = 0;
        while(l<=r){
            if(abs(v[l]-v[l+1]) == abs(v[r]-v[r-1])) c++;
            l++;
            r--;
        }
        if(c==(n/2)) cout << "YES\n";
        else cout << "NO\n";
    }
}