/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AMR15A
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin >> n;
    int ec=0; // even count
    int oc=0; // odd count 
    int a[n];
    
    //storing input
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    
    //counting the number of soldiers with even and odd weapons
    for(int i=0;i<n;i++){
        if(a[i] % 2 == 0) ec+=1;
        else oc+=1;
    }
    
    //ready if even strictly greater than odd
    if(ec>oc) cout << "READY FOR BATTLE\n";
    else cout << "NOT READY\n";
}
