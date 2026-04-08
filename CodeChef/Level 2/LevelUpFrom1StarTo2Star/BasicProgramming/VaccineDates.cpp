/* Problem Link -
https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/VDATES
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int D,L,R;
	    cin >> D >> L >> R;
	    if(L<=D && D <=R){
	        cout << "Take second dose now" << endl;
	    }
	    else if (L>D){
	        cout << "Too early" << endl;
	    }
	    else{
	        cout << "Too late" << endl;
	    }
	}

}
