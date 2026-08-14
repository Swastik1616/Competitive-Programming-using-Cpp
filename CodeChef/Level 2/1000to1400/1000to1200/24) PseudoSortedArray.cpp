// Problem Link - https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/PSEUDOSORT

#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &v, int n){
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]) return false;
    }
    return true;
}

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(auto &it:v) cin >> it;
        for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1]){
                int temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
                break;
            }
        }
        if(isSorted(v,n)) cout << "YES\n";
        else cout << "NO\n";
    }
}
