// Problem link - https://codeforces.com/contest/2224/problem/A
// failed on pretest 2

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;

        long long sum=0,ans=0;
        for(long long i=0;i<n;i++){
            long long x;
            cin >> x;
            sum += x;
            if(sum>0 && x!=0) ans = i+1;
        }
        cout << ans << "\n";
    }

    return 0;
}