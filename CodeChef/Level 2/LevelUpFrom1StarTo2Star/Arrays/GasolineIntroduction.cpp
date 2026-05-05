// Problem Link - https://www.codechef.com/practice/course/1to2stars/LP1TO202/problems/BEGGASOL

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int dist = 0;
        
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        
        int fuel = 0;
        for(int i=0;i<n;i++){
            fuel += v[i];
            if(fuel==0) break;
            else{
                fuel--;
                dist++;
            }
        }    
        cout << dist + fuel << endl;

    }
}