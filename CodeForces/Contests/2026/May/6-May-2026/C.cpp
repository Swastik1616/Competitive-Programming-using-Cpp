// Problem Link - https://codeforces.com/contest/2224/problem/C
// wrong answer on pretest 1


#include<bits/stdc++.h>
using namespace std;

bool parCheck(string a, string b){
    int aL=0,aR=0,bL=0,bR=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='(') aL++;
        else aR ++;
        if(b[i]=='(') bL++;
        else bR++;
    }
    if(aL==aR && bL==bR) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a,b;
        cin >> a;
        cin >> b;
        if(parCheck(a,b)) cout << "YES\n";
        else{
            int c=0;
            for(int j=0;j<n;j++){
                if(a[j] != b[j]){
                    char temp = a[j];
                    a[j] = b[j];
                    b[j] = temp;
                }
                if(parCheck(a,b)){ 
                    cout << "YES\n";
                    break;
                }
                if(j==n-1) c=1;
            }
            if(c==1)cout << "NO\n";
        }
    }
    
    return 0;
}