// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/DIGARR

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int d;
        cin >> d;
        string n;
        cin >> n;
        int c=0;
        for(int i=0;i<d;i++){
            int ch = n[i] - '0';
            if(ch==0 || ch==5) c++;
        }
        if(c==0) cout << "NO\n";
        else cout << "YES\n";
    }
}
