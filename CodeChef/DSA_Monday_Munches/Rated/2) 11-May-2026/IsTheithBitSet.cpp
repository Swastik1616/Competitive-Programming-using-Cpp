// Problem Link - https://www.codechef.com/DSAMONDAY002/problems/ITHBITSET
// Partially Correct

#include<bits/stdc++.h>
using namespace std;

    bool isBitSet(long long n, int i) {
        // write your code here
        if(n==0) return false;
        string s = "";
        while(n!=0){
            s += n%2;
            n /= 2;
        }
        if(s[i]==1) return true;
        return false;
    }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    return 0;
}