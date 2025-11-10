/* Problem link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/RECENTCONT
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
        vector<string> v;
        int c1=0;
        int c2=0;
        for(int i=0;i<n;i++){
            string s;
            cin >> s;
            v.push_back(s);
            if(v[i]=="START38") c1++;
            else if(v[i]=="LTIME108") c2++;
        }
        cout << c1 << " " << c2 << endl;
    }
}