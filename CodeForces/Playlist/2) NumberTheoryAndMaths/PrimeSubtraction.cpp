// Problem Link - https://codeforces.com/problemset/problem/1238/A
// observe that if diff=1, it cant be done bcoz 1 is not prime.
// else if diff is even then it can done using 2
// else if diff is odd then it can be done using 3

/* LOL HOGAYA BHAI, answer is always YES except for diff=1* bcoz
ya tho diff khud prime hoga ya fir uske prime factors hoge hi jisko 
repeated subtract kr skte*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long int x,y;
    cin >> x >> y;
    long long int diff = x-y;
    if(diff==1) cout << "NO\n";
    else cout << "YES\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}