// Problem Link - https://www.codechef.com/practice/course/1to2stars/LP1TO203/problems/ERROR

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        
        if(s.size()<3) cout << "Bad\n";
        else{
            int c = 0;
            for(int i=0;i<s.size()-2;i++){
                if((s[i]=='0' && s[i+1]=='1' && s[i+2]=='0') || (s[i]=='1' && s[i+1]=='0' && s[i+2]=='1')){
                    c = 1;
                    break;
                }
            }
            c ? cout << "Good\n" : cout << "Bad\n";
        }
    }
}