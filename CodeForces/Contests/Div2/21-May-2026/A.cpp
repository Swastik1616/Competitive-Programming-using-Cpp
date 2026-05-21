// Problem Link - https://codeforces.com/contest/2231/problem/A

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
        int c = 0;
        for(int i=1;i<=2*n;i+=2){
            c++;
            cout << i << " ";
            if(c==n) break;
        }
        cout << "\n";
    }
    return 0;
}