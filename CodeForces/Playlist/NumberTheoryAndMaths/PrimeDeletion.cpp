// Problem Link - https://codeforces.com/problemset/problem/1861/A
/* simple observation, we can make any 2 digit prime number, 
lets make 13 or 31 acc to the order of 1 and 3 in the string */

#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            cout << 13 << endl;
            break;
        }
        else if(s[i]=='3'){
            cout << 31 << endl;
            break;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}