/* Problem Link - 
https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TVDISC
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a-c<b-d) cout << "First\n";
        else if (b-d<a-c) cout << "Second\n";
        else cout << "Any\n";
    }
}
