// Problem Link - https://www.codechef.com/START234D/problems/COOLER7

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int op=0;
        int temp=n-m;
        for(int i=1; i<=temp; i++){
            op+=n;
            n--;
        }
        cout << op << endl;
    }
}
