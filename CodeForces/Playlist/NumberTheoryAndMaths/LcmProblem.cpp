// Problem Link - https://codeforces.com/problemset/problem/1389/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int l,r;
        cin >> l >> r;
        if(2*l>r) cout << -1 << " " << -1 << "\n";
        else cout << l << " " << 2*l << "\n";
    }
    return 0;
}
