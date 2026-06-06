// Problem Link - https://codeforces.com/contest/1462/problem/A

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
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        if(n==1) cout << v[0] << "\n";
        else{
            int l = 0;
            int r = n-1;
            while(l<r){
                cout << v[l] << " " << v[r] << " ";
                l++;
                r--;
            }
            if(l==r)cout << v[l];
            cout << "\n";
        }
    }
    return 0;
}