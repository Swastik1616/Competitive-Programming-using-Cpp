// Problem Link - https://codeforces.com/problemset/gymProblem/102267/B

/* simply observed that all prime numbers execpt 2 are odd, 
so to divide an odd number into 2 numbers, one must be even as odd+odd!=odd,
by taking examples we can see that a prime number can be expressed only as 2 + aother prime
*/

#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n){
    if(n==0 || n==1) return false;
    for(int i=2;i*i<=n;i++){ // i<=sqrt(n) is same as i*i<=n
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    if(checkPrime(n-2)) cout << 2 << " " << n-2 << endl;
    else cout << -1 << endl;
    return 0;
}