// Problem Link - https://www.codechef.com/START209D/problems/P2209

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        int s1=0;
        int s2=0;
        for(int i=x;i<=y;i++){
            if(i%x==0){
                if(i%2==0) s1+=i;
                else s2+=i;
            }
        }
        if(s1>=s2) cout << "YES\n";
        else cout << "NO\n";
    }
}