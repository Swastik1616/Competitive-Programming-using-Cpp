// Problem link - https://codeforces.com/contest/670/problem/D1 && D2
// binary search on answer - new & different

#include<bits/stdc++.h>
using namespace std;

bool checkReq(long long n,long long k,long long mid,vector<long long> &a,vector<long long> &b){
    for(long long i=0;i<n;i++){
        long long req = a[i] * mid;
        req -= b[i];
        if(req>0){
            if(k>=req) k -= req;
            else return false;
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,k;
    cin >> n >> k;
    
    vector<long long> A(n),B(n);

    for(long long i=0;i<n;i++) cin >> A[i];
    for(long long i=0;i<n;i++) cin >> B[i];

    long long l = 0;
    long long h = INT_MAX;
    long long ans = 0;

    while(l<=h){
        long long mid = l + (h-l)/2;

        if(checkReq(n,k,mid,A,B)){
            ans = mid;
            l = mid + 1;
        }
        else h = mid - 1;
    }
    cout << ans << "\n";
    return 0;
}