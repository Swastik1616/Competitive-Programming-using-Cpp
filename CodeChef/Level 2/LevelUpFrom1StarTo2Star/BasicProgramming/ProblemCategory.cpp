// Problem Link - https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/PROBCAT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(1<=x && x<100) cout << "Easy\n";
        else if(100<=x && x<200) cout << "Medium\n";
        else cout << "Hard\n";
    }
}
