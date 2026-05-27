// Problem Link - https://www.codechef.com/START240D/problems/RVBS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a,b;
        cin >> a;
        cin >> b;
        
        int ac = 0, bc = 0;
        for(int i=0;i<n;i++){
            if(a[i]=='1') ac++;
            if(b[i]=='1') bc++;
        }
        
        if(ac!=bc) cout << "-1\n";
        else{
            vector<int>a1,b1;
            for(int i=0;i<n;i++){
                if(a[i]=='1') a1.push_back(i);
                if(b[i]=='1') b1.push_back(i);
            }
            
            int ans=0;
            for(int i=0;i<a1.size();i++){
                if(a1[i]!=b1[i]) ans++;
            }
            
            cout << ans << "\n";
        }
    }
}
