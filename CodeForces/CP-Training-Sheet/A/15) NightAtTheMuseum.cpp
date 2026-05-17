// Problem Link - https://codeforces.com/contest/731/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int ans = 0;
    char a = 'a';
    for(int i=0;i<s.size();i++){
        ans += min(abs(a-s[i]),26 - abs(a-s[i]));
        a = s[i];
    }
    
    cout << ans << "\n";

    return 0;
}