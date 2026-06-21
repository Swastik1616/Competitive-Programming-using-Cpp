// Problem Link - https://codeforces.com/contest/270/problem/A

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
        int a;
        cin >> a;
        360 % (180-a) == 0 ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}