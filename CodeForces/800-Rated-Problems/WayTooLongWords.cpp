// Problem Link - https://codeforces.com/problemset/problem/71/A

#include<bits/stdc++.h>
using namespace std;

void abbr(string s){
    cout << s[0] << s.size()-2 << s[s.size()-1] << endl;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        if(s.size()>10) abbr(s);
        else cout << s << endl;
    }
    return 0;
}