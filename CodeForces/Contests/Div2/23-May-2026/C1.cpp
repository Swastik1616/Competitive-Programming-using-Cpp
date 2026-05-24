// Problem Link - https://codeforces.com/contest/2229/problem/C1
//upsolved

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
        vector<int> a(n),b;

        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        
        int flip = 0;
        for(int i=n-1;i>=0;i--){
            if(a[i]>0 && flip%2==0){
                b.push_back(i+1);
                flip++;
            }
            else if(a[i]<0 && flip%2!=0){
                b.push_back(i+1);
                flip++;
            }
            
        }

        cout << b.size() << "\n";
        if(b.size()) for(auto it:b) cout << it << " ";
        cout << "\n";
    }
    return 0;
}