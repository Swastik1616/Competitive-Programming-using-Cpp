/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOW018
*/

#include<bits/stdc++.h>

using namespace std;

int main() { 
    int t;
    cin >> t;
    while(t--){
        long long n, res = 1;
        cin >> n;
        for(int i = 1; i <= n; i++)
           res *= i;
        cout << res << endl;
    }
}
