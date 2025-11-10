/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/WORDLE
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        string s,t;
        cin >> s;
        cin >> t;
        for(int i=0;i<5;i++){
            if(t[i] == s[i]) cout << "G";
            else cout << "B";
        }
        cout << endl;
    }
}