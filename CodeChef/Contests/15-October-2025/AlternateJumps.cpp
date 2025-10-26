/* Problem Link -
https://www.codechef.com/START208D/problems/ALJMP
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int pos = n;
        for(int i=1;i<=n;i++){
            if(i%2==0) pos += n-i;
            else pos -= n-i;
        }
        cout << pos << endl;
    }
}
