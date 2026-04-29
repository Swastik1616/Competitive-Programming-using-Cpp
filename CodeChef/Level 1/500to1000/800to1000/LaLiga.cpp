// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/COOK82A

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
        int t;
        cin >> t;
        while(t--){
            string s;
            int r,b,e,m,n=4;
            while(n--){
                cin >> s;
                if(s=="RealMadrid") cin >> r;
                if(s=="Barcelona") cin >> b;
                if(s=="Eibar") cin >> e;
                if(s=="Malaga") cin >> m;
            }
            if(r<m && b>e) cout << "Barcelona\n";
            else cout << "RealMadrid\n";
        }
}
