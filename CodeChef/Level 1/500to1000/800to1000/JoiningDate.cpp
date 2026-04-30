// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/JOINING

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin  >> t;
    while(t--){
        float n,k;
        cin >> n >> k;
        cout << ceil(n/5) - ceil(k/5) << endl;
    }
}
