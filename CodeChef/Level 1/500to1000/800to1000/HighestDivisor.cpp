//Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/HDIVISR

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin >> n;
    int maxD = 1;
    for(int i = 2; i<=10; i++){
        if(n%i == 0 && i>maxD) maxD = i;
    }
    cout << maxD << endl;
}
