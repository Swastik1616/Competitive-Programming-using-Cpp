// Problem Link - https://codeforces.com/contest/2232/problem/B
// 1.5hrs lage krne mei, sari debugging k bad jb test cases 
// yahan vs code mein pass hue aur submit krne gya, time khtm hogya

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        
        vector<long long> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        
        if(v[0]>=v[1]){
            for(int i=1;i<n-1;i++){
                if((v[i]+v[i-1])/(i+1)>=v[i]) v[i] += v[i-1];
            }
            for(int i=0;i<n-1;i++){
                cout << v[i]/(i+1) << " ";
            }
            if((v[n-1]+v[n-2])/(n)>=v[n-2]) cout << (v[n-1] + v[n-2])/(n) << " ";
            else cout << v[n-2]/(n-1) << " ";
            cout << "\n";
        }
        else{
            for(int i=0;i<n;i++) cout << v[0] << " ";
            cout << "\n";
        }
    }
    return 0;
}