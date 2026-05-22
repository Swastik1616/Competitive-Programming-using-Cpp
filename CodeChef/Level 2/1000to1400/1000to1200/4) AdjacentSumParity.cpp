// Problem Link - https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ADJSUMPAR
// good question language nice one

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum = 0;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            sum +=x;
        }
        if(sum%2==0) cout << "YES\n";
        else cout << "NO\n";
    }
}
