// Problem Link - https://codeforces.com/contest/2227/problem/B

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int L = 0;
        int R = 0;

        for(int i=0;i<n;i++){
            if(s[i]=='(') L++;
            else R++;
        }

        if(L==R) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}