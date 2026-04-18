// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/PSGRADE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int Amin,Bmin,Cmin,Tmin,A,B,C;
        cin >> Amin >> Bmin >> Cmin >> Tmin >> A >> B >> C;
        if(A>=Amin && B>=Bmin && C>=Cmin && (A+B+C)>=Tmin) cout << "YES\n";
        else cout << "NO\n";
    }
}
