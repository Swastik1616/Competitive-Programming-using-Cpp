// Problem Link - https://www.codechef.com/practice/course/1to2stars/LP1TO202/problems/SUBTASK

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        
        vector<int> arr(n);
        int allOnes = 0;
        int mOnes = 0;
        
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i]==1) allOnes++;
        }
        
        if(allOnes==n) cout << 100 << endl;
        else{
            for(int i=0;i<m;i++){
                if(arr[i]==1) mOnes++;
            }
            if(mOnes==m) cout << k << endl;
            else cout << 0 << endl;
        }
    }
}