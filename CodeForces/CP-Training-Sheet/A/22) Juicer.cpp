// Problem Link - https://codeforces.com/contest/709/problem/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,b,d;
    cin >> n >> b >> d;
    int sum=0,ans=0;
    vector<int> v(n);

    for(int i=0;i<n;i++) cin >> v[i];
    for(auto it:v){
        if(it<=b) sum+=it;
        if(sum>d){
            ans++;
            sum = 0;
        }
    }
    cout << ans << "\n";
    return 0;
}