// Problem Link - https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/DIET

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        
        vector<int> v(n);
        
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        
        int rem = 0,c=0;
        for(int i=0;i<n;i++){
            if(k<=v[i]+rem){
                rem += v[i] - k;
                c=0;
            }
            else{
                c = i+1;
                break;
            }
        }
        
        if(c==0) cout << "YES\n";
        else cout << "NO " << c << "\n";
    }
}
