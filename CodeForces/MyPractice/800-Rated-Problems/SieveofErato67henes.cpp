// Problem Link - https://codeforces.com/problemset/problem/2195/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);

        for(int i=0;i<n;i++){
            cin >> v[i];
        }

        int c=0;
        for(auto &it:v){
            if(it==67) c++;
        }

        if(c==0) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}