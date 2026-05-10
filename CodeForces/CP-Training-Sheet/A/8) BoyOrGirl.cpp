// Problem Link - https://codeforces.com/contest/236/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    unordered_set<char> ans;

    for(int i=0;i<s.size();i++){
        ans.insert(s[i]);
    }

    if(ans.size()%2==0) cout << "CHAT WITH HER!\n";
    else cout << "IGNORE HIM!\n";
    return 0;
}