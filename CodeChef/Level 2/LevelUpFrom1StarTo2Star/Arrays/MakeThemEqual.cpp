// Problem Link - https://www.codechef.com/practice/course/1to2stars/LP1TO202/problems/MAKEEQUAL

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int max = 0;
        int min = 100000;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            if(x>max) max = x;
            if(x<min) min = x;
        }
        cout << max - min << endl;
    }
}
