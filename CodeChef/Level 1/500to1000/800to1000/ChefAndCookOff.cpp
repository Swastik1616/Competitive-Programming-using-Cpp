// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/CCOOK

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin >> n;
    while(n--){
        int c = 0;
        for(int i=1;i<=5;i++){
            int x;
            cin >> x;
            if(x==1) c++;
        }
        if(c==0) cout << "beginner\n";
        else if(c==1) cout << "junior developer\n";
        else if(c==2) cout << "middle developer\n";
        else if(c==3) cout << "senior developer\n";
        else if(c==4) cout << "hacker\n";
        else if(c==5) cout << "Jeff Dean\n";
    }
}