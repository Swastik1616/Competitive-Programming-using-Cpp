// Problem Link - https://www.codechef.com/START240D/problems/FREQP

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        
        //to count freq of all elements of a vector
        unordered_map<int, int> freq;
        for(int x : a) {
            freq[x]++; 
        }
        
        // to find max freq
        int m = 0;
        for(auto pair : freq) {
            if(pair.second > m) {
                m = pair.second;
            }
        }
        
        cout << n-m+1 << "\n";
    }
}   
