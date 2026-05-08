// Problem Link - https://codeforces.com/problemset/problem/1139/B
// input can be very big number so it will not run with only int.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    long long int ans = v[n-1];
    long long int max = ans-1;
    for(int i=n-2;i>=0;i--){
        ans += min(max,v[i]);
        max = min(max,v[i]) - 1;
        if(max<=0) break;
    }
    cout << ans << endl;
    return 0;
}