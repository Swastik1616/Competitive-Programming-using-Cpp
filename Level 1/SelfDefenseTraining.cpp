/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SELFDEF
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
        vector<int> a;
        int count=0;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            a.push_back(x);
            if(a[i]>=10 && a[i]<=60){
                count++;
            }
        }
        cout << count << endl;
    }
}
