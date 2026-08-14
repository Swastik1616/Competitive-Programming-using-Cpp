// Problem Link - https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/HEADBOB

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c1 = 0, c2 = 0;
        for(auto it:s){
            if(it=='I') c1++;
            else if(it=='Y') c2++;
        }
        if(c1==0 && c2==0) cout << "NOT SURE\n";
        else if(c1==0) cout << "NOT INDIAN\n";
        else cout << "INDIAN\n";
    }
}