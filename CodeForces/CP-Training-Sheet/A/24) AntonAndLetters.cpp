// Problem Link - https://codeforces.com/contest/443/problem/A

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
    getline(cin,s);
    set<char> ans;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z') ans.insert(s[i]);
    }
    cout << ans.size();
    return 0;
}