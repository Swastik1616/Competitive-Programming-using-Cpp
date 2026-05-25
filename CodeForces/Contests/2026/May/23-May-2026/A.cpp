// Problem Link - https://codeforces.com/contest/2229/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n);
        int M = 0;
        int m = INT_MAX;
        for(int i=0;i<n;i++){
            cin >> v[i];
            M = max(M,v[i]);
            m = min(m,v[i]);
        }
        int s = m + M;
        int mean = 0;
        if(s%2==0) mean = s/2;
        else mean = s/2 + 1;

        cout << mean - m << "\n";
    }
    return 0;
}