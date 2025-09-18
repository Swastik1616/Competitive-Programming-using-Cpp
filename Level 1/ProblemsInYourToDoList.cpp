/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TODOLIST
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
        int D[n];
        for(int i=0;i<n;i++){
            cin >> D[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(D[i]>=1000) count++;
        }
        cout << count << endl;
    }
}
