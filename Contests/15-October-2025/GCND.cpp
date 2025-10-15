/* Problem Link -
https://www.codechef.com/START208D/problems/GUCD
*/

#include <bits/stdc++.h>
using namespace std;


int cal(int a, int b){
    int z;
    int up = max(a,b);
    for(int i=1;i<=up;i++){
        if(a%i != 0 && b%i != 0) z=i;
    }
    return z;
}
int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        int res = cal(v[0],v[1]);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(res > cal(v[i],v[j])) res = cal(v[i],v[j]);
            }
        }
        cout << res << endl;
    }
}
