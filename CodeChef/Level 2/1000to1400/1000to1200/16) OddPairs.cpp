// Problem Link - https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ODDPAIRS

#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long ec = n/2, oc = (n+1)/2;
        cout << 2*ec*oc << "\n";
    }
}