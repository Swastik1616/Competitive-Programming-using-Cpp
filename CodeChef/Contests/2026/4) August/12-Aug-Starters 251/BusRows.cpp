// https://www.codechef.com/START251D/problems/BUSROW

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        float n,m,x;
        cin >> n >> m >> x;
        cout << min(ceil(x/m),n - ceil(x/m) + 1) << "\n";
    }
}
