// Problem Link - https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/IMDB

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        
        int final_rating = 0;
        
        for(int i=0;i<n;i++){
            int space,curr_rating;
            cin >> space >> curr_rating;
            if(space<=x && curr_rating>final_rating) final_rating=curr_rating;
        }
        
        cout << final_rating << endl;
    }
}