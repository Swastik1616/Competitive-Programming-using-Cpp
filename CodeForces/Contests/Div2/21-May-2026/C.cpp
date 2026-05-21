// Problem Link - 
// leave
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
        int c1=0,c2=0,c4=0;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
            if(v[i]==1) c1++;
            else if(v[i]==2) c2++;
            else if(v[i]==4) c4++;
        }
        
    }
    return 0;
}