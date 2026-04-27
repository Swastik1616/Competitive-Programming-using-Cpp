// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/FIFTYPE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,ans=0;
        cin >> n;
        while(n!=50){
            if(n<50){
                n+=2;
                ans++;
            }
            else if(n>50){
                n-=3;
                ans++;
            }
            else ans = 0;
        }
        cout << ans << endl;
    }
}