// Problem Link - https://codeforces.com/contest/1676/problem/E
// ans = lb + 1, bcoz lb is 0-based.

// prefix sum + sorting + lowerbound // crazyyy
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n,q;
        cin >> n >> q;

        vector<int>a(n);
        // vector<int>pS; // prefix sum array
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort(a.begin(),a.end(),greater<>());
        //for(auto &it:a) cout << it << " ";

        // pS.push_back(a[0]);
        // for(int i=1;i<n;i++){
        //     pS.push_back(pS[i-1]+a[i]);
        // }

        //for(auto &it:pS) cout << it << " ";

        // converting directly to prefix sum array
        for(int i=1;i<n;i++){
            a[i] += a[i-1];
        }

        for(int i=0;i<q;i++){
            int x;
            cin >> x;
            int lb = lower_bound(a.begin(),a.end(),x) - a.begin();
            if(lb==n) cout << "-1\n";
            else cout << lb + 1 << "\n";
        }
    }
    return 0;
}