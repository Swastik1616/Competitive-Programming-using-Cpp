/* Problem Link -
https://www.codechef.com/START208D/problems/SBTG
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,x,k;
        cin >> n >> x >> k;
        vector <int> v;
        
        int count =0;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        while(k--){
            int m=v[0];
            int pos;
            for(int i=0;i<n;i++){
                if(m<v[i]) m = v[i];
                if (v[i] == m) pos = i;
            }
            v[pos] = 0;
            x += 100;
        }
        for(int i=0;i<n;i++){
            if(v[i] > x) count++;
        }
        int r = count + 1;
        cout << r << endl;
    }
}
