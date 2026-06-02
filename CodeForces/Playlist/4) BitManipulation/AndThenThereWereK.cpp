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
        int ans = 1;
        while(ans<=n){
            ans<<=1; // left shift 1 time == mul by 2
        }
        ans>>=1; // right shift 1 time == div by 2
        cout << ans - 1 << "\n";
    }
    return 0;
}