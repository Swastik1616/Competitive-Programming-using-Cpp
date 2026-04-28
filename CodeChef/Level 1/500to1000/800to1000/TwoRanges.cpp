// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/TWORANGES

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int ans=0;
        for(int i=1;i<=8;i++){
            if((i>=a && i<=b) || (i>=c && i<=d)) ans++;
        }
        cout << ans << endl;
    }
}
