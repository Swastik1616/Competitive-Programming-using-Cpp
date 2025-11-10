/* Problem Link -
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FLOW006
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
        int sum = 0;
        while(n!=0){
            sum+=n%10;
            n/=10;
        }
        cout << sum << endl;
    }
}
