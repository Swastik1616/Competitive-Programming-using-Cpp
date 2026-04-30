// Problem Link -https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/KTTABLE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        vector<int>b(n);
        
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        
        for(int i=n-1;i>0;i--){
            a[i] -= a[i-1];
        }

        int ans = 0;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            if(x<=a[i]) ans++;
        }
        
        cout << ans << endl;
    }
}
