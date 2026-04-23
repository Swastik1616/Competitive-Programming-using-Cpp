// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/FIRSTANDLAST

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
        
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
    
        int final_sum = 0;
        for(int i=0;i<n-1;i++){
            int curr_sum = v[i] + v[i+1];
            if(curr_sum > final_sum) final_sum = curr_sum;
        }
        cout << max(final_sum,v[0]+v[n-1])<< endl;
    }
}
