// Problem Link - https://codeforces.com/contest/427/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int p = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x!=-1) p+=x; // positive number means no. of officers
        else if(p==0) ans++; // negative no. && no police -> untreated
        else{ // negative no. && some police -> send police 
            p--;
        }
    }
    
    cout << ans;

    return 0;
}