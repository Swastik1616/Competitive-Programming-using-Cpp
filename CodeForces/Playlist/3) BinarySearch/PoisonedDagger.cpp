// Problem Link - https://codeforces.com/problemset/problem/1613/C

#include<bits/stdc++.h>
using namespace std;

bool check(long long n, long long h, vector<long long> &a, long long k){
    long long sum = 0;
    for(int i=0;i<n-1;i++){
        long long x = a[i] + k - 1;
        if(a[i+1]<=x){
            x = a[i+1] - a[i];
        }
        else x = k;
        sum += x;
    }
    sum += k;

    return (sum>=h);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long n,h;
        cin >> n >> h;

        vector<long long> v(n);
        for(int i=0;i<n;i++) cin >> v[i];

        long long low = 1;
        long long high = h;
        long long ans = 0;

        while(low<=high){
            long long mid = low + (high-low)/2;
            if(check(n,h,v,mid)){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }

        cout << ans << "\n";
    }
    return 0;
}