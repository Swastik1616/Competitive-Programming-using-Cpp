// Problem Link - https://www.codechef.com/START233D/problems/MOVIE7

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,m,a,b,c;
        cin >> n >> m >> a >> b >> c;
        int p1 = n*a + m*b;
        int p2 = 0;
        if(n<m){
            p2 = n*c + (m-n)*b; 
        }
        else if(m<n){
            p2 = m*c + (n-m)*a;
        }
        else {
            p2 = n*c;
        }
        if(p1>=p2) cout << p2 << endl;
        else cout << p1 << endl;
    }
}
