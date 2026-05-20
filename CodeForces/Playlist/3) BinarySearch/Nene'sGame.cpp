// Problem Link - https://codeforces.com/contest/1956/problem/A
// crazyyy observation - at the end of all rounds
// the remaining number of people will be either
// one less than the 1st number in array a 
// or it will be directly that no. if it is even smaller

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int k,q;
        cin >> k >> q;
        vector<int> a(k),b(q);
        for(int i=0;i<k;i++){
            cin >> a[i];
        }
        for(int i=0;i<q;i++){
            cin >> b[i];
        }

        int x = a[0] - 1;
        for(auto it:b){
            if(it<a[0]) cout << it << " ";
            else cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
