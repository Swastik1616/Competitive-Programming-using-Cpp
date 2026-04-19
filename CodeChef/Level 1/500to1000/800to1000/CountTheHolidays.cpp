// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/SUNDAY

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,ans=8;
        cin >> n;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            if(x%7 != 6 && x%7 != 0) ans++;
        }
        cout << ans << endl;
    }
}
