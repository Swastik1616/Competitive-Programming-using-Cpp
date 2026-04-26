// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/FLOW005

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,ans=0;
        cin >> n;
        vector<int> v = {100,50,10,5,2,1};
        for(auto &it:v){
            int curr = n/it;
            ans += curr;
            n -= it * curr;
        }
        cout << ans << endl;
    }
}
