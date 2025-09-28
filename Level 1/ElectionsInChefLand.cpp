/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/ELECTN
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int count = 0;
        for(int i = 0; i < n; i++){
            if(a[i] >= x) count++;
        }
        cout << count << endl;
    }
}
