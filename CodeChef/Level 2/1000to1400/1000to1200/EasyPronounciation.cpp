// Problem Link - https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/EZSPEAK

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        if(n<4) cout << "YES\n";
        else{
            int c = 0,x=0;
            for(int i=0;i<n;i++){
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                c=0;
                else c++;
                if(c>=4){
                    x=1;
                    break;
                }
            }
            if(x==1) cout << "NO\n";
            else cout << "YES\n";
        }
    }
}