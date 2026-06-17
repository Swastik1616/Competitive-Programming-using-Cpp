// Problem Link - https://www.codechef.com/START243D/problems/LOSELESS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int m,n;
        cin >> m >> n;
        if(m>=n) cout << m-n << "\n";
        else if((n-m)%2==0) cout << "0\n";
        else cout << "1\n";
    }
}   
