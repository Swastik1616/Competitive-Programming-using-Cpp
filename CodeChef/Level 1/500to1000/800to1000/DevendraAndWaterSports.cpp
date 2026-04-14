// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/DEVSPORTS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int z,y,a,b,c;
        cin >> z >> y >> a >> b >> c;
        if((z-y)>=(a+b+c)) cout << "Yes\n";
        else cout << "No\n";
    }
}
