// Problem Link - https://codeforces.com/contest/294/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    int m;
    cin >> m;
    while(m--){
        int x,y;
        cin >> x >> y;
        if(x>1) a[x-2] += y-1;
        if(x<n) a[x] += a[x-1] - y;
        a[x-1] = 0;
    }
    for(auto it:a) cout << it << "\n";
    return 0;
}