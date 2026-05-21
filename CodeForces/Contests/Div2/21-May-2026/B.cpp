// Problem Link - https://codeforces.com/contest/2231/problem/B
// upsolved, still wrong
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n),b;
        for(int i=0;i<n;i++){
            cin >> v[i];
        }

        int m = 0;
        for(int i=0;i<n;i++){
            if(v[i] > m) m = v[i];
            if(v[i] < m) b.push_back(v[i]);
        }
        //for(auto it:b) cout << it << " ";
        if(b.size()){
            int c = 0;
            for(int i=0;i<b.size()-1;i++){
                if(b[i]>b[i+1]){
                    c=1;
                    break;
                }
            }
            if(c==1) cout << "NO\n";
            else cout << "YES\n";    
        }
        else cout << "YES\n";

    }
    return 0;
}