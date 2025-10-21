/* Problem Link -
https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/FAVOURITENUM
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        // your code goes here
        if(a%2==0 && a%7==0) cout << "Alice\n";
        else if(a%2!=0 && a%9==0) cout << "Bob\n";
        else cout << "Charlie\n";
    }

}
