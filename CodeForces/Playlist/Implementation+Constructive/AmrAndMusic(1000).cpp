// Problem Link - https://codeforces.com/problemset/problem/507/A
// awesome implementation

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<pair<int,int>>v;

    for(int i=0;i<n;i++){ // taking input and storing it as pair in vector <#days,1-based Index>
        int x;
        cin >> x;
        v.push_back({x,i+1});
    }

    sort(v.begin(),v.end()); // by default sorting based on 1st part of pair.

    int ans=0;
    vector<int> indices; 
    for(auto &it:v){
        if(it.first<=k) { // if #days<=total(k) then we can learn that instrument so ans++ and push corresponding index to print and then subtract those days from total.
            ans++;
            indices.push_back(it.second);
            k -= it.first;
        }
    }

    cout << ans << endl; // output
    for(auto &it:indices){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}