// Problem Link - https://codeforces.com/contest/474/problem/B
// wuhuuu well done maza aya - prefix sum + lowerbound
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    //converting to prefix sum array
    for(int i=1;i<n;i++){
        v[i] += v[i-1];
    }

    int m;
    cin >> m;
    for(int i=0;i<m;i++){
        int x;
        cin >> x;
        int lb = lower_bound(v.begin(),v.end(),x) - v.begin();
        cout << lb + 1 << "\n";
    }

    return 0;
}