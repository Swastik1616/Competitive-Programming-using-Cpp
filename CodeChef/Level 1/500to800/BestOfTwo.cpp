/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DICEGAME2
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        vector<int> v;
        for(int i=0;i<6;i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        int r1=0;
        int r2=0;
        for(int i=0;i<6;i++){
            if(i<=2) r1+=v[i];
            else r2+=v[i];
        }
        int min1 = v[0];
        int min2 = v[3];
        for(int i=0;i<6;i++){
            if(i<=2 && v[i]<min1) min1 = v[i];
            else if(i>2 && v[i]<min2) min2 = v[i];
        }
        r1 -= min1;
        r2 -= min2;
        
        if(r1>r2) cout << "Alice\n";
        else if(r1<r2) cout << "Bob\n";
        else cout << "Tie\n";
    }
}
