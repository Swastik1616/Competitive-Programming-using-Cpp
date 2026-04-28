// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/AVOIDCONTACT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        int n=0;
        if(y==0) n = x;
        else if(y==x) n = 2*y-1;
        else n = (x-y+1) + 2*y-1;
        cout << n << endl;
    }
}   
