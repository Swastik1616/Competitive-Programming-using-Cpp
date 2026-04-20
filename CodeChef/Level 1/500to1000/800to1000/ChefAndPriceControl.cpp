// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/PRICECON

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int loss = 0;
        for(int i=1;i<=n;i++){
            int x;
            cin >> x;
            if(x>k) loss += (x-k);
        }
        
        cout << loss << endl;
    }
}