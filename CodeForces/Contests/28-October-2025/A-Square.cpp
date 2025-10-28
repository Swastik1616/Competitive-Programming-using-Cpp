/* Problem Link -
https://codeforces.com/contest/2167/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a==b && b==c && c==d) cout << "YES\n";
        else cout << "NO\n";
    }
}