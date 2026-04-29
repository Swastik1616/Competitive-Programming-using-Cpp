// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/PLAYPIAN

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int c=0;
        for(int i=0;i<s.size();i+=2){
            if(s[i]==s[i+1]){
                c++;
            }
        }
        if(c==0) cout << "Yes\n";
        else cout << "No\n";
    }
}