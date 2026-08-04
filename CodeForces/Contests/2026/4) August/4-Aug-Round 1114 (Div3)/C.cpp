// Problem Link - https://codeforces.com/contest/2254/problem/C1
//WA
#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define vin for(auto &it:v) cin >> it

void solve(){
    int n;
    cin >> n;
    string a,b;
    cin >> a >> b;
    if(n<3){
        if(a==b) cout << "YES\n";
        else cout << "NO\n";
    }
    else{
        for(int i=0;i<n-2;i++){
            if(a[i]=='0' && a[i+1]=='0' && a[i+2]=='1'){
                a[i]='1';
                a[i+1]='0';
                a[i+2]='0';
                i+=2; 
            }
            else if(a[i]=='1' && a[i+1]=='0' && a[i+2]=='0'){
                a[i]='0';
                a[i+1]='0';
                a[i+2]='1';
                i+=2;
            }

            if(a[i]=='1' && a[i+1]=='1' && a[i+2]=='0'){
                a[i]='0';
                a[i+1]='1';
                a[i+2]='1';
                i+=2;
            }
            else if(a[i]=='0' && a[i+1]=='1' && a[i+2]=='1'){
                a[i]='1';
                a[i+1]='1';
                a[i+2]='0';
                i+=2;
            }
        }
        if(a==b) cout << "YES\n";
        else cout << "NO\n";
    }
}

void TCs(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    TCs();
    //solve();
    
    return 0;
}