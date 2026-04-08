/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DPOLY
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
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        if(v[n-1]!=0) cout << n-1 << endl;
        else{
            for(int i=n-2;i>=0;i--){
                if(v[i]!=0){
                    cout << i << endl;
                    break;
                }
            }
        }
    }
}
