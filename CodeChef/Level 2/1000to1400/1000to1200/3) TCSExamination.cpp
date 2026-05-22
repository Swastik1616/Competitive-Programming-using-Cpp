// Problem Link - https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/EXAMTIME

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int dD,dT,dM;
        cin >> dD >> dT >> dM;
        int sD,sT,sM;
        cin >> sD >> sT >> sM;
        
        int dTotal = dD+dT+dM;
        int sTotal = sD+sT+sM;
        
        if(dTotal>sTotal) cout << "Dragon\n";
        else if(sTotal>dTotal) cout << "Sloth\n";
        else if(dD>sD) cout << "Dragon\n";
        else if(sD>dD) cout << "Sloth\n";
        else if(dT>sT) cout << "Dragon\n";
        else if(sT>dT) cout << "Sloth\n";
        else cout << "Tie\n";
    }
}
