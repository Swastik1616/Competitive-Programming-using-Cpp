// Problem Link - https://www.codechef.com/practice/course/1to2stars/LP1TO202/problems/VACCINQ

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,p,x,y;
        cin >> n >> p >> x >> y;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int child_count = 0;
        int old_count = 0;
        for(int i=0;i<p-1;i++){
            if(arr[i]==0) child_count++;
            else old_count++;
        }
        cout << x*child_count + y*old_count + y << endl;
    }
}