// Problem Link - https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/EVENTUAL

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        map<char,int> mp;
        for(int i=0;i<n;i++){
            char c;
            cin >> c;
            mp[c]++;
        }
        
        int c = 0;
        for(auto it:mp){
            if(it.second&1){
                c = 1;
                break;
            }
        }
        
        if(c) cout << "NO\n";
        else cout << "YES\n";
    }
}