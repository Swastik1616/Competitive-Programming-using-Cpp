/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFEREN
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;
        int res=0;
        for(int i=1;i<=n;i++){
            if(i%2==0) res+=a;
            else res+=b;
        }
        cout << res << endl;
    }
}
