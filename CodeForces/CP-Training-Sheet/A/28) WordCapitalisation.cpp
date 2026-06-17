// Problem Link - https://codeforces.com/contest/281/problem/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    if(s[0]>='a' && s[0]<='z') s[0] = 'A' + (s[0]-'a');
    cout << s;
    return 0;
}