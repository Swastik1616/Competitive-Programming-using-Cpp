// Problem Link - https://codeforces.com/problemset/problem/1743/A

// 0 to 9 -> 10 digits
// 2 distinct appear twice each like 1122 2121 etc
// so always there can be 6 types of passowrds from 2 chosen digits
// bcoz 4c2 = 6
// now we have to choose 2 digits from the digits which can be chose
// i.e (10-n)c2 bcoz n digits cant be chosen.

#include<bits/stdc++.h>
using namespace std;

int nCr(int n,int r){
    if(r==0 || r==n) return 1;
    if(r>n) return 0;
    return nCr(n-1,r-1) + nCr(n-1,r);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
        }

        cout << nCr(10-n,2) * 6 << "\n";
    }

    return 0;
}
