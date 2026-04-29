// Problem Link - https://www.codechef.com/practice/course/1to2stars/LP1TO203/problems/PAWRI

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='p' && s[i+1]=='a' && s[i+2]=='r' && s[i+3]=='t' && s[i+4]=='y'){
                s[i+2] = 'w';
                s[i+3] = 'r';
                s[i+4] = 'i';
            }
        }
        cout << s << endl;
    }
}