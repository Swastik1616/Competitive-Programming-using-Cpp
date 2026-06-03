// Problem Link - https://www.codechef.com/START240D/problems/COUNTAB

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
        int ac = 0, bc = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='a') ac++;
            else bc++;
        }
        cout << ac << " " << bc << "\n";
    }
}