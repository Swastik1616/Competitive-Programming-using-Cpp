// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/LEAGUE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int first = (n-1)*3;
        int second = (n-2)%2==0? (n-2)/2*3 : (n-1)/2*3;
        cout << first - second << endl;
    }
}
