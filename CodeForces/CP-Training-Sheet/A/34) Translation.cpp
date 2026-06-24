// Problem Link - https://codeforces.com/contest/41/problem/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

bool isRev(string s,string t){
    string rev = "";
    for(int i=s.size()-1;i>=0;i--) rev += s[i];
    if(rev==t) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s,t;
    cin >> s;
    cin >> t;
    isRev(s,t) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}