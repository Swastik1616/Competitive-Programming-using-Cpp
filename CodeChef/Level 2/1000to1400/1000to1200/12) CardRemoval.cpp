// Problem Link - https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/REMOVECARDS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            mp[x]++;
        }   
        int m = 0;
        for(auto it:mp){
            m = max(m,it.second);
        }
        cout << n - m << "\n";
    }
}   
