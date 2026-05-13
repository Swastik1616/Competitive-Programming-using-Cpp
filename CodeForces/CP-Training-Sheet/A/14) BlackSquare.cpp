// Problem Link - https://codeforces.com/contest/431/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v(4);
    for(int i=0;i<4;i++){
        cin >> v[i];
    }

    string s;
    cin >> s;

    int ans = 0;

    for(auto &it:s){
        if(it=='1') ans += v[0];
        else if(it=='2') ans += v[1];
        else if(it=='3') ans += v[2];
        else ans += v[3];
    }

    cout << ans;

    return 0;
}