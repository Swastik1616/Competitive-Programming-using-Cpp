/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/PALL01
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
        int temp = n;
        int rev=0;
        while(n!=0){
            rev = rev*10 + (n%10);
            n/=10;
        }
        if(temp ==  rev) cout << "wins\n";
        else cout << "loses\n";
    }
}