// Problem Link - https://www.codechef.com/DSAMONDAY002/problems/LARGODDSTRIN

#include<bits/stdc++.h>
using namespace std;

void findLargestOddSubstring(string num) {
    // write your code here...
    int x = -1;
    for(int i=num.size()-1;i>=0;i--){
        if(num[i]%2!=0){
            x=i;
            break;
        }
    }
    if(x==-1) cout << -1;
    else{
        for(int i=0;i<=x;i++){
            cout << num[i];
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    return 0;
}