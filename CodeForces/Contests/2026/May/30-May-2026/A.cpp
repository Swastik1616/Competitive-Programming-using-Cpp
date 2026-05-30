// Problem Link - https://codeforces.com/contest/2232/problem/A
// WA - will upsolve


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
        int m = INT_MAX;
        int M = 0;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            m = min(m,x);
            M = max(M,x);
        }
        cout << (m+M)/2 << "\n";
    }
    return 0;
}