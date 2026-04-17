// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/INSTDUM

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,ans=0;
        cin >> n;
        int total_runs = 0;
        
        for(int i = 0; i < n; i++) {
            int runs;
            cin >> runs;
            total_runs += runs;
            
            // Strike rate is 100 if and only if total_runs == balls_faced (i + 1)
            if(total_runs == i+1) ans++;
        }
        cout << ans << endl;    
    }
}