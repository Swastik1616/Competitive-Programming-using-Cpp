// Problem Link - https://www.codechef.com/START237D/problems/DIVKIDS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int ans = 0;
        for(int i=0;i<n;i++){
            int y;
            cin >> y;
            if(y%x==0 && ans<y) ans = y;
        }
        cout << ans << endl;
    }
}
