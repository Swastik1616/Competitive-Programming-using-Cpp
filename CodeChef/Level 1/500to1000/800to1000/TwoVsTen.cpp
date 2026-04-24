// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/TWOVSTEN

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int c = 0;
        while(1){
            if(x%5 != 0){
                c = -1;
                break;
            }
            if(x%2 == 0 && x%5 == 0) {
                break;
            }
            c++;
            x*=2;
        }
        cout << c << endl;
    }
}
