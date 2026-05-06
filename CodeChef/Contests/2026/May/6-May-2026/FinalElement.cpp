// Problem Link - https://www.codechef.com/START237D/problems/FINELE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a;
        
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            a.push_back(x);
        }
        
        vector<int> b;
        for(int i=1;i<n;i++){
            for(int j=0;j<a.size()-1;j++){
                int elem = a[j] ^ a[j+1];
                b.push_back(elem);
            }
            a.clear();
            a = b;
            b.clear();
        }
        
        for(auto &it:a) cout << it << " ";
        cout << endl;
    }
}
