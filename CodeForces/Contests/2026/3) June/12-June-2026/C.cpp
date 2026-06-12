// Problem Link - https://codeforces.com/contest/2236/problem/C
// divide first and then add
#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int a,b,x;
        cin >> a >> b >> x;
        vector<pair<int,int>>A,B;
        int cA=0,cB=0;
        while(a>0){
            A.push_back({a,cA});
            a/=x;
            cA++;
        }
        A.push_back({0,cA});

        while(b>0){
            B.push_back({b,cB});
            b/=x;
            cB++;
        }
        B.push_back({0,cB});

        int ans = INT_MAX;
        for(int i=0;i<A.size();i++){
            for(int j=0;j<B.size();j++)
            ans = min(ans,A[i].ss + B[j].ss + abs(A[i].ff-B[j].ff));
        }

        cout << ans << "\n";
    }
    return 0;
}