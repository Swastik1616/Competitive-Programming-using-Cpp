// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/UTKPLC

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        char first,second,third,x,y;
        cin >> first >> second >> third;
        cin >> x >> y;
        if(x==first || y==first) cout << first << endl;
        else if(x==second || y==second) cout << second << endl;
        else cout << third << endl;
    }
}