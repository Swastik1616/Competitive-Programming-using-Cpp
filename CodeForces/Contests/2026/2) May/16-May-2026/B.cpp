// Problem Link - https://codeforces.com/contest/2228/problem/B
// wrong on pretest 2
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n,x1,x2,k;
        cin >> n >> x1 >> x2 >> k;

        int ans = 0;
        if(x1>x2){
            x2 = (x2-k)%n;
        }
        else if(x1<x2){
            x2 = (x2+k)%n;
        }
        
        ans = abs(x1-x2);
        cout << ans << "\n";
    }
    return 0;
}