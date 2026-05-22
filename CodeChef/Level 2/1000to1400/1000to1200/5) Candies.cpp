// Problem Link - https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CNDY

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(2*n);
        for(int i=0;i<2*n;i++){
            cin >> v[i];
        }
        
        sort(v.begin(),v.end());
        
        int c=0;
        for(int i=0;i<2*n - 1;i++){
            if(v[i]==v[i+1]) c++;
            else c = 0;
            
            if(c>=2) break;
        }
        
        if(c>=2) cout << "NO\n";
        else cout << "YES\n";
    }
}
