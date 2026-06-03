// Problem Link - https://www.codechef.com/START241D/problems/EVENSUM1

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        int s = 0;
        for(int i=0;i<n;i++){
            cin >> v[i];
            s += v[i];
        }
        
        int c=0;
        for(auto it:v){
            if((s-it)%2==0){
                cout << "YES\n";
                c = 1;
                break;
            }
        }
        if(c==0) cout << "NO\n";
    }
}