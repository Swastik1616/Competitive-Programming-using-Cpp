/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHN15A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> v;
        int count = 0;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            v.push_back(x);
            v[i]+=k;
            if(v[i]%7==0) count++;
        }
        cout << count << endl;
    }
}
