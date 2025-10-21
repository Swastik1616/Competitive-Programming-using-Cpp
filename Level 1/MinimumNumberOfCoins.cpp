/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINCOINS
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x%10==0) cout << x/10 << endl;
        else{
            int rem=x%10;
            if(rem%5==0) cout << (x-rem)/10 + rem/5 << endl;
            else cout << "-1" << endl;
        }
    }
}
