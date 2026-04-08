/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/PRB01
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
        if(n==1) cout << "NO\n";
        else{
            int c=0;
            for(int i=2;i<n;i++){
                if(n%i==0) c++;
            }
            if(c==0) cout << "YES\n";
            else cout << "NO\n";            
        }
    }
}