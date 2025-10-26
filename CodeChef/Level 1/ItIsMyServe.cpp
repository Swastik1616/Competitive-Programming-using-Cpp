/* Problem Link -
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MYSERVE
*/
// maza agya nice question

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int p,q;
        cin >> p >> q;
        int turn = p + q + 1;
        for(int i=1;i<=turn;i++){
            if(turn == 1  || turn == 2 || turn - (4*i) == 1 || turn - (4*i) == 2){
                cout << "Alice\n";
                break;
            }
            else if(turn == 3  || turn == 4 ||turn - (4*i) == 3 || turn - (4*i) == 4){
                cout << "Bob\n";
                break;
            }
        }
    }
}
