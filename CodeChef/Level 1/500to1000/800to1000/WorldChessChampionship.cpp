// Problem link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/WCC

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        
        string s;
        cin >> s;
        
        int carlsenCount = 0;
        int chefCount = 0;
        int carlsenPrize = 0;
        int chefPrize = 0;
        
        for(int i=0;i<14;i++){
            if(s[i]=='C') carlsenCount+=2;
            else if(s[i]=='N') chefCount+=2;
            else{
                chefCount++;
                carlsenCount++;
            }
        }
        
        if(chefCount>carlsenCount){
            chefPrize = 60 * x;
            carlsenPrize = 40 * x;
        }
        else if(carlsenCount>chefCount){
            carlsenPrize = 60 * x;
            chefPrize = 40 * x;
        }
        else{
            carlsenPrize = 55 * x;
            chefPrize = 45 * x;
        }
        
        cout << carlsenPrize << endl;
    }
}