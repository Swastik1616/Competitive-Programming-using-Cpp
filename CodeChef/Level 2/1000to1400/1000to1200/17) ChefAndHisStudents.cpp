// Problem Link - https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CHEFSTUD

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        for(auto &it:s){
            if(it=='<') it = '>';
            else if(it=='>') it = '<';
        }
        int ans = 0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='>' && s[i+1]=='<') ans++;
        }
        cout << ans << "\n";
    }
}
