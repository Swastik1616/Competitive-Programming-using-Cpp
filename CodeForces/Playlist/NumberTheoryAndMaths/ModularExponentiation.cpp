// Problem Link - https://codeforces.com/problemset/problem/913/A

#include<bits/stdc++.h>
using namespace std;

long long findPow(long long a,long long b){
    long long ans = 1;
    for(int i=1;i<=b;i++){
        ans *= a;
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,m;
    cin >> n;
    cin >> m;

    if(n>30) cout << m << endl;
    else cout << m % findPow(2,n) << endl;
    
    return 0;
}