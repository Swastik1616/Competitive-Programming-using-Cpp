#include<bits/stdc++.h>
using namespace std;

// Prime or not - O(n)
bool checkPrime1(int n){
    if(n==0 || n==1) return false;
    for(int i=2;i<n;i++){
        if(n%i==0) return false;
    }
    return true;
}


// Prime or not - O(sqrt(n))
bool checkPrime2(int n){
    if(n==0 || n==1) return false;
    for(int i=2;i*i<=n;i++){ // i<=sqrt(n) is same as i*i<=n
        if(n%i==0) return false;
    }
    return true;
}


// Factors - O(n)
void printFactors1(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0) cout << i << " ";
    }
}


// Factors - O(sqrt(n))
void printFactors2(int n){
    for(int i=1;i*i<=n;i++){ 
        if(n%i==0 && i!=n/i) cout << i << " " << n/i << " ";
    }
}

/* Sieve of Eratosthenes - To print all prime numbers in a range,
 it would take O(n*n) or O(n*sqrt(n)) beacuse we will call checkPrime n times, 
 sieve algo will help in reducing it to O(n*loglogn)
*/

vector<bool> sieve(int n){ // function of sieve which returns an array
    vector<bool> primes(n+1,true); // creating a vector of size n+1 initially all true
    primes[0]=primes[1]=false; // bcoz 0 & 1 are not prime

    for(int i=2;i*i<=n;i++){ // going from 2 to sqrt(n)
        if(primes[i]){ // if primes[i]==true i.e. if it is prime
            for(int j=i*i;j<=n;j+=i){ // going from square of that no. to n;
                primes[j]=false; // setting all its multiples as false because no multiples of a prime no. will be prime.
            }
        }
    }

    return primes; // returning this array in which all positions with true are prime and rest not prime
}

int findPow(int a,int b){ // TC = O(b)
    int ans = 1;
    for(int i=1;i<=b;i++){
        ans *= a;
    }
    return ans;
}

int binExp(int a,int b){ // TC = O(logb)
    if(b==0) return 1;
    if(b==1) return a;

    int x = binExp(a,b/2);
    int ans = 0;
    
    if(b%2==0) ans = x*x;
    else ans = x*x*a;

    return ans;
}

int modExp(int a,int b,int m){
    if(b==0) return 1;
    if(b==1) return a % m;

    int x = modExp(a,b/2,m);
    int ans = 0;

    if(b%2==0) ans = ((x % m)*(x % m)) % m;
    else {
        ans = ((x % m)*(x % m)) % m;
        ans = ((ans % m)*(a % m)) % m;
    }
    return ans;
}

// GCD using Euclidian Algorithm - TC = O(logb)
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

// LCM using product of 2 numbers = product of their lcm & gcd
int lcm(int a,int b){
    int ans = (a*b)/gcd(a,b);
    return ans;
}

// factorial - O(n)
int factorial(int n){
    if(n==0 || n==1) return 1;
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}

// nCr or C(n,r) - using factorial
int FactnCr(int n, int r){
    if(r==0 || r==n) return 1; // bcoz nC0 & nCn = 1
    if(r>n) return 0; 

    int ans = factorial(n)/(factorial(r)*factorial(n-r));
    return ans;
}

// reursive nCr bcoz nCr = (n-1)C(r-1) + (n-1)Cr
int nCr(int n,int r){
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