#include<bits/stdc++.h>
using namespace std;

/*
// Prime or not - O(n)
bool checkPrime(int n){
    if(n==0 || n==1) return false;
    for(int i=2;i<n;i++){
        if(n%i==0) return false;
    }
    return true;
}
*/

// Prime or not - O(sqrt(n))
bool checkPrime(int n){
    if(n==0 || n==1) return false;
    for(int i=2;i*i<=n;i++){ // i<=sqrt(n) is same as i*i<=n
        if(n%i==0) return false;
    }
    return true;
}

/* 
// Factors - O(n)
void printFactors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0) cout << i << " ";
    }
}
*/

// Factors - O(sqrt(n))
void printFactors(int n){
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





































int main(){

    return 0;
}