#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

bool check(ll n){
    if((n&(n-1))==0) return true;
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(check(n)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}