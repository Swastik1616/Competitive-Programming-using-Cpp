// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/NOTIME

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,h,x,c=0;
    cin >> n >> h >> x;
    for(int i=0;i<n;i++){
        int y;
        cin >> y;
        if(y==h-x) c++;
    }
    if(c!=0) cout << "YES\n";
    else cout << "NO\n";

}

