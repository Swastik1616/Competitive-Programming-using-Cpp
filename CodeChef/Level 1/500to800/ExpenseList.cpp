/* Problem Link -
https://www.codechef.com/learn/course/cpp-beginner-v2-p1/BP00BC16_V2/problems/EXPENSES
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,x,res;
        cin >> n >> x;
        res = (pow(2,x));
        for(int i=1;i<=n;i++){
            res/=2;
        }
        cout << res << endl;
    }
}
