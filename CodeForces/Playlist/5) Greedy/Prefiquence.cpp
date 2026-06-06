// Problem Link - https://codeforces.com/problemset/problem/1968/B
//maza aaya khud kiyaa 

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
        int n,m;
        cin >> n >> m;
        string a,b;
        cin >> a;
        cin >> b;
        int i=0,j=0;
        while(i<n && j<m){
            if(a[i]==b[j]){
                i++;
                j++;
            }
            else j++;
        }
        cout << i << "\n";
    }
    return 0;
}