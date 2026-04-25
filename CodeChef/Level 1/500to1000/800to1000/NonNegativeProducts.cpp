// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/NONNEGPROD

#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,c1=0;
    int c2 = 0;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x==0) c2=1;
        if(x<0) c1++;
    }
    if(c1%2 == 0 || c2==1) cout << 0 << endl;
    else cout << 1 << endl;    
}

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}