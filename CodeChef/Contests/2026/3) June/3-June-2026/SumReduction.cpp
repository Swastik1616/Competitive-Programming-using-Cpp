// Problem Link - https://www.codechef.com/START241D/problems/SUMREDUCTION
// upsolved

// when AND of 2 numbers==0 then (their sum = their OR)

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long sum = 0;
        long long ORed = 0;
        for(long long i=0;i<n;i++){
            long long x;
            cin >> x;
            sum += x;
            ORed |= x;
        }
        if(sum==ORed) cout << "Yes\n";
        else cout << "No\n";
    }
}