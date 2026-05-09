// Problem Link - https://codeforces.com/contest/112/problem/A
/* converted both strings to lowercase so as to compare them,
now I was comparing each character separately in for loop,
which actually wasnt required, we can directly compare strings*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1,s2;
    cin >> s1;
    cin >> s2;
    int n = s1.size();
    
    for(int i=0;i<n;i++){
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }

    if(s1<s2) cout << "-1\n";
    else if(s2<s1) cout << "1\n";
    else cout << "0\n";

    // int eq = 1;
    // for(int i=0;i<n;i++){
    //     if(s1[i]<s2[i]){
    //         cout << "-1\n";
    //         eq++;
    //         break;
    //     }
    //     else if(s2[i]<s1[i]){
    //         cout << "1\n";
    //         eq++;
    //         break;
    //     }
    // }
    // if(eq==1) cout << "0\n";
    //cout << s1 << " " << s2;
    return 0;
}