// Problem Link - https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/PRIMEREVERSE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a,b;
        cin >> a >> b;
        map<char,int> mp1,mp2;
        for(auto it:a) mp1[it]++;
        for(auto it:b) mp2[it]++;
        if(mp1==mp2) cout << "YES\n";
        else cout << "NO\n";
    }
}
