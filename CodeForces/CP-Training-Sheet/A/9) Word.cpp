// // Problem Link - https://codeforces.com/contest/59/problem/A

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;
//     cin >> s;
//     int uC=0,lC=0;

//     for(int i=0;i<s.size();i++){
//         if(s[i]>=97 && s[i] <=122) lC++;
//         else uC++;
//     }
//     //cout << lC << " " << uC;
//     if(lC<uC) {
//         for(auto &it:s) it=toupper(it);
//     }
//     // else if(uC<lC){
//     //     for(auto &it:s) it=tolower(it);
//     // }
//     else {
//         for(auto &it:s) it=tolower(it);
//     }
//     cout << s << "\n";
//     return 0;
// }

// Problem Link - https://codeforces.com/contest/59/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int uC=0,lC=0;

    for(int i=0;i<s.size();i++){
        if(islower(s[i])) lC++;
        else uC++;
    }
    if(lC<uC) { // start    end       store   operation
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }
    else {
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }
    cout << s << "\n";
    return 0;
}