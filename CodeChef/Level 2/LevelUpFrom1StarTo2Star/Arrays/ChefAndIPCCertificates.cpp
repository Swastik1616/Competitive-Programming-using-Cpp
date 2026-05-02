// Problem Link - https://www.codechef.com/practice/course/1to2stars/LP1TO202/problems/IPCCERT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,m,k;
    cin >> n >> m >> k;
    int ans = 0;
    while(n--){
        int sum = 0;
        for(int i=0;i<k;i++){
            int x;
            cin >> x;
            sum+=x;
        }
        int q;
        cin >> q;
        if(sum>=m && q<=10) ans++;
    }
    cout << ans << endl;
}
