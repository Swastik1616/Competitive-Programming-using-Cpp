/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FLOW004
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
        int sum=n%10;
        while(n>9){
            n=n/10;
        }
        sum+=n;
        cout << sum << endl;
    }
}
