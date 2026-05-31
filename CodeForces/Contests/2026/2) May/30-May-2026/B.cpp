// Problem Link - https://codeforces.com/contest/2232/problem/B
// 1.5hrs lage krne mei, sari debugging k bad jb test cases 
// yahan vs code mein pass hue aur submit krne gya, time khtm hogya
// still WA
// upsolved

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
        
        long long s = v[0];
        long long m = v[0];
        cout << v[0] << " ";

        for(int i=1;i<n;i++){
            s += v[i];
            m = min(m,s/(i+1));
            cout << m << " ";
        }

        cout << "\n";
    }
    return 0;
}