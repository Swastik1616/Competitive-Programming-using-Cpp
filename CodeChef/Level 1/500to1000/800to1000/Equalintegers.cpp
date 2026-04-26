// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/INCREAR

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x,y,ans=0;
    cin >> x >> y;
    while(x!=y){
        if(x<y){
            while(x<y){
                x++;
                ans++;
            }
        }
        else if(y<x){
            while(y<x){
                y+=2;
                ans++;
            }
        }
        else ans = 0;
    }
    
    cout << ans << endl;
}

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
