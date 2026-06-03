// Problem Link - https://www.codechef.com/START241D/problems/NO3EQUAL

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
        int c=0;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1] && s[i+1]==s[i+2]){
                c++;
                i+=2;
            } 
        }
        if(n<3) cout << "0\n";
        else cout << c << "\n";
    }
}
