// Problem Link - https://codeforces.com/contest/228/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_set<int> s;
    for(int i=0;i<4;i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << 4 - s.size() << "\n";
    return 0;
}