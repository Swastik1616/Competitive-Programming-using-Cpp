/* Problem Link -
https://codeforces.com/contest/2167/problem/B
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s,t;
        cin  >> s >> t;
        int count1 = 0;
        int count2 = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(t[i]==s[j]){
                    count1++;
                    s[j]='0';
                    break;
                }
            }
        }
        if(count1>=n) cout << "YES\n";
        else cout << "NO\n";
    }
}