// Problem Link - https://leetcode.com/problems/contiguous-array/description/

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int findMaxLength(vector<int>& v, int n) {
    int ans=0,sum=0;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        if(v[i]==0) sum -= 1;
        else sum += 1;
        if(sum==0) ans = i + 1;
        else{
            if(mp.find(sum)!=mp.end()) ans = max(ans,i-mp[sum]);
            else mp[sum] = i;
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    cout << findMaxLength(v,n);
    return 0;
}