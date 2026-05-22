// Problem Link - https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ATM2

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        string ans = "";
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            if(x<=k){
                ans += '1';
                k -= x;
            }
            else ans += '0';
        }
        
        cout << ans << endl;
    }
}