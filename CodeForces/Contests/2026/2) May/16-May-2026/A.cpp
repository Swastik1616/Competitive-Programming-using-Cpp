// Problem Link - https://codeforces.com/contest/2228/problem/A
// was missing the remaining elements initially
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
        int zC=0,oC=0,tC=0;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            if(x==0) zC++;
            else if(x==1) oC++;
            else tC++;
        }
        int pairs = min(oC,tC);
        int rem = n - pairs*2 - zC;
        cout << zC + pairs +  rem/3 << "\n";
    }
    return 0;
}