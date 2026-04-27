// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/NUM239

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int l,r,ans=0;
        cin >> l >> r;
        for(int i=l;i<=r;i++){
            int x = i%10;
            if(x==2 || x==3 || x==9) ans++;
        }
        cout << ans << endl;
    }
}
