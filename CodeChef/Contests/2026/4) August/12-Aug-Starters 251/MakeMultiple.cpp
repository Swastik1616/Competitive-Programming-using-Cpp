// https://www.codechef.com/START251D/problems/MUL123

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int x = (n%5==0) ? n+5 : n + (5 - n%5);
        if(n%3==0) cout << "0\n";
        else if((n+1)%3==0 || x%3==0) cout << "1\n";
        else cout << "2\n";
    }
}