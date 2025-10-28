/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEAT
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
        int count=0;
        for(int i=1;i<n;i+=7){
            count++;
        }
        cout << count << endl;
    }
}
