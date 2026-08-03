// Problem Link - https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ENDSORTED

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(auto &it:v) cin >> it;
        int s = 100000, l = 0;
        int si = 0, li = 0;
        for(int i=0;i<n;i++){
            s = min(s,v[i]);
            l = max(l,v[i]);
        }
        for(int i=0;i<n;i++){
            if(s==v[i]) si = i;
            if(l==v[i]) li = i;
        }
        if(si<li) cout << si+n-li-1 << "\n";
        else if(li<si) cout << si+n-li-2 << "\n";
    }
}