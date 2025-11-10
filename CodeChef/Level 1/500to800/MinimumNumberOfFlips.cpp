/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINFLIPS
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
        int c1=0;
        int c2=0;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            v.push_back(x);
            if(v[i] == 1) c1++;
            else c2++;
        }
        int dif = abs(c1-c2);
        if(n%2==0){
            if(c1==c2) cout << "0\n";
            else if((dif == 2)) cout << "1\n";
            else if(c1==n || c2==n) cout << n/2 << endl;
            else if((dif > 2)) cout << dif/2 << endl;
        }
        else cout << "-1\n";
    }
}
