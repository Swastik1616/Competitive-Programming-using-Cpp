// Problem Link - https://codeforces.com/contest/344/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s ;
    while(n--){
        string x;
        cin >> x;
        s += x;
    }
    int ans = 1;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]) ans++;
    }
    cout << ans << endl;
    return 0;
}