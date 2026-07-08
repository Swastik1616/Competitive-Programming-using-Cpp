// Problem Link - https://codeforces.com/problemset/problem/1890/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &it:v) cin >> it;
    map<int,int>mp;
    for(auto it:v) mp[it]++;
    int s = mp.size();
    if(s>=3) cout << "No\n";
    else if(s==1) cout << "Yes\n";
    else{
        //another way to extract map elems bcoz only 2 are there
        //int x = mp.begin()->ss;
        //int y = mp.rbegin()->ss;
        vector<int> a;
        for(auto it:mp) a.push_back(it.ss);
        if(abs(a[0]-a[1])<=1) cout << "Yes\n";
        else cout << "No\n";
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