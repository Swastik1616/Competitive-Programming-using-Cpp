// Problem Link - https://codeforces.com/problemset/gymProblem/102267/B

#include<bits/stdc++.h>
using namespace std;

vector<bool> sieve(int n){
    vector<bool> primes(n+1,true);
    primes[0]=primes[1]=false;
    for(int i=2;i*i<=n;i++){
        if(primes[i]){
            for(int j=i*i;j<=n;j+=i){
                primes[j]=false;
            }
        }
    }
    return primes;
}

int main(){
    int n;
    cin >> n;

    vector<bool> primes = sieve(n);

    int c=1;
    for(int i=2;i<=n;i++){
        if(primes[i] && primes[n-i]){
            cout << i << " " << n-i << endl;
            c=0;
            break;
        }
    }
    if(c) cout << -1 << endl;
    return 0;
}