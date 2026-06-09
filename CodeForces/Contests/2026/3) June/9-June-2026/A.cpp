// Problem Link - https://codeforces.com/contest/2233/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        double n,x,y,z;
        cin >> n >> x >> y >> z;
        double c1 = ceil(n/(x+y));
        double c2 = ceil(n/x);
        double c3 = z + ceil((n-z*x)/(x + 10*y));
        cout << min(c1,min(c2,c3)) << "\n";
    }
    
    return 0;
}