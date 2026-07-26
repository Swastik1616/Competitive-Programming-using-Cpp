// Problem Link - https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CHEFSTLThttps://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CHEFSTLT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        string s1,s2;
        cin >> s1 >> s2;
        int n = s1.size();
        
        int min_d = n, max_d =  n;
        for(int i=0;i<n;i++){
            if(s1[i]=='?' || s2[i]=='?' || s1[i]==s2[i]) min_d--;
            if(s1[i]==s2[i] && s1[i]!='?') max_d--;
        }
        
        cout << min_d << " " << max_d << "\n";
    }
}
