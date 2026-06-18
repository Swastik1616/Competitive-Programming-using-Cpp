// Problem Link - https://codeforces.com/problemset/problem/1903/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;

        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];

        bool flag = true;
        for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1]) {
                flag = false;
                break;
            }
        }
        if((flag && k==1) || k>1 )cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}