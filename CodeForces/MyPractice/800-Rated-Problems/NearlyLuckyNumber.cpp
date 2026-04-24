// Problem Link - https://codeforces.com/problemset/problem/110/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int c = 0;
    int n = s.size();
    for(int i=0;i<n;i++){
        int x = s[i] - '0';
        if(x==4 || x==7) c++;
    }
    if(c==4 || c==7) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}