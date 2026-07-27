// Problem Link - https://codeforces.com/problemset/problem/1788/A

#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define vin for(auto &it:v) cin >> it

void solve1(){ //broooo maza aagaya finallyy khud kia
    int n;
    cin >> n;
    vi v(n);
    vin;
    int c1=0,c2=0;
    for(auto it:v){
        if(it==1) c1++;
        else c2++;
    }
    if(c1==n) cout << "1\n"; //all ones
    else if(c2==n){ //all twos
        if(n%2==0) cout << n/2 << "\n";
        else cout << "-1\n";
    }
    else{
        for(auto &it:v){
            if(it==2) it=1;
            else it=0;
        }
        vll pre(n),post(n);

        pre[0] = v[0];
        for(int i=1;i<n;i++){
            pre[i] = pre[i-1] + v[i];
        }
        
        post[0] = v[n-1];
        for(int i=n-2;i>=0;i--){
            post[n-i-1] = post[n-i-2] + v[i];
        }

        int ans = INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(pre[i]==post[j] && i+j+2==n){
                    ans = min(ans,i);
                }
            }
        }
        if(ans!=INT_MAX) cout << ans + 1 << "\n";
        else cout << "-1\n";
    }
}

void solve2(){ // optimised version of my approach
    int n;
    cin >> n;
    vi v(n);
    vin;
    int c1=0,c2=0;
    for(auto it:v){
        if(it==1) c1++;
        else c2++;
    }
    if(c1==n) cout << "1\n"; //all ones
    else if(c2==n){ //all twos
        if(n%2==0) cout << n/2 << "\n";
        else cout << "-1\n";
    }
    else{
        for(auto &it:v){
            if(it==2) it=1;
            else it=0;
        }
        vll pre(n),post(n);

        pre[0] = v[0];
        for(int i=1;i<n;i++){
            pre[i] = pre[i-1] + v[i];
        }
        
        post[0] = v[n-1];
        for(int i=n-2;i>=0;i--){
            post[n-i-1] = post[n-i-2] + v[i];
        }

        int ans = -1;
        for(int i=0;i<=n-2;i++){
            int j = n - i - 2;
            if(pre[i]==post[j]){
                ans = i +1 ;
                break;
            }
        }
        cout << ans << "\n";
    }
}

void solve3(){ // counting the #2's till k and after k
    int n;
    cin >> n;
    vi v(n);
    vin;
    int ans = -1;
    for(int k=0;k<n;k++){
        int k1=0,k2=0;
        for(int i=0;i<=k;i++){
            if(v[i]==2) k1++;
        }
        for(int j=k+1;j<n;j++){
            if(v[j]==2) k2++;
        }
        if(k1==k2){
            ans = k+1;
            break;
        }
    }
    cout << ans << "\n";
}

void solve4(){ 
    int n;
    cin >> n;
    vi v(n);
    vin;
    
    int tc = 0;
    for(auto it:v) if(it==2) tc++;
    
    if(tc&1) cout << "-1\n"; // if total #2's is odd, then no such k exists
    else{
        int cc = 0;
        for(int i=0;i<n;i++){ 
            if(v[i]==2) cc++;
            if(cc==tc/2){ // if current #2's = half of total #2's then that index is answer
                cout << i+1 << "\n";
                break;
            }
        }
    }
}

void TCs(){
    int t;
    cin >> t;
    while(t--){
        solve4();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    TCs();
    //solve();
    
    return 0;
}