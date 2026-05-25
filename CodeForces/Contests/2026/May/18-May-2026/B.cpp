// Problem Link - https://codeforces.com/contest/2230/problem/B
//WA
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int ans = 0,c=0;
        if(s.size()==1 && s[0]=='4') cout << 1 << "\n";
        else{
            for(int i=0;i<s.size()-1;i++){
                for(int j=i+1;j<s.size();j++){
                    if(s[i]=='1' && s[j]=='2'){
                        s[i]=0;
                        s[j]=0;
                        ans++;
                    }
                    if(s[i]=='2' && s[j]=='4'){
                        s[i]=0;
                        s[j]=0;
                        ans++;
                        c++;
                    }
                    if(s[i]=='4' && s[j]=='4'){
                        s[i]=0;
                        s[j]=0;
                        ans++;
                        c++;
                    }
                    if(s[i]=='3' && s[j]=='2'){
                        s[i]=0;
                        s[j]==0;
                        ans++;
                    }                
                }
            }
            if(c) cout << ans + 1 << "\n";
            else cout << ans << "\n";
        }
    }
    return 0;
}
