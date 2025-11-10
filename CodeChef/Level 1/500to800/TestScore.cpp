/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFSCORE
IMPORTANT QUESTION
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,x,y;
        cin >> n >> x >> y;
        if(y==0) cout << "YES\n";
        else {
                int count = 0;
                for(int i=1; i<=n; i++){
                    if((y % (x*i)) == 0) count++;
                }
        
                if(count == 0 || (n==1 && x<y) || (n*x < y)) cout << "NO\n";
                else cout << "YES\n";
        }
    }
}
