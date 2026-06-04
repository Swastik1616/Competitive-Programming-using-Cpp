#include<bits/stdc++.h>
using namespace std;
using ll = long long;

// Prime or not - O(n)
bool checkPrime1(ll n){
    if(n==0 || n==1) return false;
    for(ll i=2;i<n;i++){
        if(n%i==0) return false;
    }
    return true;
}


// Prime or not - O(sqrt(n))
bool checkPrime2(ll n){
    if(n==0 || n==1) return false;
    for(ll i=2;i*i<=n;i++){ // i<=sqrt(n) is same as i*i<=n
        if(n%i==0) return false;
    }
    return true;
}


// Factors - O(n)
void prllFactors1(ll n){
    for(ll i=1;i<=n;i++){
        if(n%i==0) cout << i << " ";
    }
}


// Factors - O(sqrt(n))
void prllFactors2(ll n){
    for(ll i=1;i*i<=n;i++){ 
        if(n%i==0 && i!=n/i) cout << i << " " << n/i << " ";
    }
}

/* Sieve of Eratosthenes - To prll all prime numbers in a range,
 it would take O(n*n) or O(n*sqrt(n)) beacuse we will call checkPrime n times, 
 sieve algo will help in reducing it to O(n*loglogn)
*/

vector<bool> sieve(ll n){ // function of sieve which returns an array
    vector<bool> primes(n+1,true); // creating a vector of size n+1 initially all true
    primes[0]=primes[1]=false; // bcoz 0 & 1 are not prime

    for(ll i=2;i*i<=n;i++){ // going from 2 to sqrt(n)
        if(primes[i]){ // if primes[i]==true i.e. if it is prime
            for(ll j=i*i;j<=n;j+=i){ // going from square of that no. to n;
                primes[j]=false; // setting all its multiples as false because no multiples of a prime no. will be prime.
            }
        }
    }

    return primes; // returning this array in which all positions with true are prime and rest not prime
}

ll findPow(ll a,ll b){ // TC = O(b)
    ll ans = 1;
    for(ll i=1;i<=b;i++){
        ans *= a;
    }
    return ans;
}

ll binExp(ll a,ll b){ // TC = O(logb)
    if(b==0) return 1;
    if(b==1) return a;

    ll x = binExp(a,b/2);
    ll ans = 0;
    
    if(b%2==0) ans = x*x;
    else ans = x*x*a;

    return ans;
}

ll modExp(ll a,ll b,ll m){
    if(b==0) return 1;
    if(b==1) return a % m;

    ll x = modExp(a,b/2,m);
    ll ans = 0;

    if(b%2==0) ans = ((x % m)*(x % m)) % m;
    else {
        ans = ((x % m)*(x % m)) % m;
        ans = ((ans % m)*(a % m)) % m;
    }
    return ans;
}

// GCD using Euclidian Algorithm - TC = O(logb)
ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}

// LCM using product of 2 numbers = product of their lcm & gcd
ll lcm(ll a,ll b){
    ll ans = (a*b)/gcd(a,b);
    return ans;
}

// factorial - O(n)
ll factorial(ll n){
    if(n==0 || n==1) return 1;
    ll fact = 1;
    for(ll i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}

// nCr or C(n,r) - using factorial
ll FactnCr(ll n, ll r){
    if(r==0 || r==n) return 1; // bcoz nC0 & nCn = 1
    if(r>n) return 0; 

    ll ans = factorial(n)/(factorial(r)*factorial(n-r));
    return ans;
}

// reursive nCr bcoz nCr = (n-1)C(r-1) + (n-1)Cr
ll nCr(ll n,ll r){
    if(r==0 || r==n) return 1; 
    if(r>n) return 0; 

    return nCr(n-1,r-1) + nCr(n-1,r);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << nCr(4,2);
    return 0;
}