// Problem Link - https://codeforces.com/problemset/problem/1873/C

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

// void solve(){
//     int ans = 0;
//     for(int i=1;i<=10;i++){
//         string s;
//         cin >> s;
//         if(i==1 || i==10){
//             for(auto it:s) if(it=='X') ans++;
//         }
//         else if(i==2 || i==9){
//             for(int j=1;j<=10;j++){
//                 if(s[j-1]=='X'){
//                      if(j==1 || j==10) ans++;
//                      else ans +=2;
//                 }
//             }
//         }
//         else if(i==3 || i==8){
//             for(int j=1;j<=10;j++){
//                 if(s[j-1]=='X'){
//                     if(j==1 || j==10) ans++;
//                     else if(j==2 || j==9) ans +=2;
//                     else ans += 3;
//                 }
//             }
//         }
//         else if(i==4 || i==7){
//             for(int j=1;j<=10;j++){
//                 if(s[j-1]=='X'){
//                     if(j==1 || j==10) ans++;
//                     else if(j==2 || j==9) ans +=2;
//                     else if(j==3 || j==8 )ans += 3;  
//                     else ans += 4;                  
//                 }
//             }
//         }
//         else if(i==5 || i==6){
//             for(int j=1;j<=10;j++){
//                 if(s[j-1]=='X'){
//                     if(j==1 || j==10) ans++;
//                     else if(j==2 || j==9) ans += 2;
//                     else if(j==3 || j==8) ans += 3;  
//                     else if(j==4 || j==7) ans += 4;   
//                     else ans +=5;               
//                 } 
//             }
//         }
//     }
//     cout << ans << "\n";
// }   

void solve(){
    int score[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(i==0 || i==9) score[i][j] = 1;
            else if(i==1 || i==8){
                if(j==0 || j==9) score[i][j] = 1;
                else score[i][j] = 2; 
            }
            else if(i==2 || i==7){
                if(j==0 || j==9) score[i][j] = 1;
                else if(j==1 || j==8 )score[i][j] = 2; 
                else score[i][j] = 3;  
            }
            else if(i==3 || i==6){
                if(j==0 || j==9) score[i][j] = 1;
                else if(j==1 || j==8) score[i][j] = 2; 
                else if(j==2 || j==7) score[i][j] = 3;
                else score[i][j] = 4;  
            }
            else if(i==4 || i==5){
                if(j==0 || j==9) score[i][j] = 1;
                else if(j==1 || j==8) score[i][j] = 2; 
                else if(j==2 || j==7) score[i][j] = 3;
                else if(j==3 || j==6) score[i][j] = 4; 
                else score[i][j] = 5;
            }
        }
    }
    int ans = 0;
    char target[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin >> target[i][j];
            if(target[i][j]=='X') ans += score[i][j];
        }
    }
    cout << ans << "\n";
}

void TCs(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    TCs();
    //solve();
    
    return 0;
}