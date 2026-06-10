// Problem Link - https://codeforces.com/contest/265/problem/A 

#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s,t;
    cin >> s;
    cin >> t;
    int p1=0,p2=0;
    while(p1<s.size() && p2<t.size()){
        if(s[p1]==t[p2]){
            p1++;
            p2++;
        }
        else p2++;
    }
    cout << p1 + 1 << "\n";

    return 0;
}