// Problem Link - https://codeforces.com/contest/9/problem/A 

#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin >> a >> b;
    int m = max(a,b);
    int num = 6 - m + 1;
    int den = gcd(num,6);
    cout << num/den << "/" << 6/den << "\n";
    
    return 0;
}