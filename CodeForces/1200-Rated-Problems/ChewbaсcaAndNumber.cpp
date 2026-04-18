// Problem Link - https://codeforces.com/contest/514/problem/A
// AMAZING EDGE CASES MAZA AAYA

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,ans;
    cin >> s;

    // converting string chars to int and replacing them if inverted digit is smaller
    for(int i=0;i<s.size();i++){
        int x = s[i] - '0';
        if(9-x < x) ans += 9-x + '0';
        else ans += x + '0';
    }
    
    // to avoid leading zeroes
    int j=0;
    while(j<ans.size()){
        if(ans[j] != '0') break;
        ans[j] = '9';
    }

    cout << ans << endl;
    return 0;
}