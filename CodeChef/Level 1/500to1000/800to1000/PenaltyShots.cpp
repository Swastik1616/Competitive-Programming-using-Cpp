// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/PENALTY

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int s1=0,s2=0;
        for(int i=1;i<=10;i++){
            int x;
            cin >> x;
            if(i%2==0 && x==1) s2++;
            else if(i%2!=0 && x==1) s1++;
        }
        s1>s2 ? cout << 1 << endl : s2>s1 ? cout << 2 << endl : cout << 0 << endl;
    }
}
