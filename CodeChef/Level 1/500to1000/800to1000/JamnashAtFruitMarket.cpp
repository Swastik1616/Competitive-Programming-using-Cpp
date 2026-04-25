// Problem Link - https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/JMARKET

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    
	    int a[3];
	    cin>>a[0]>>a[1]>>a[2];
	    sort(a, a+3);
	    
	    cout<<(x-1)*a[0] + a[1]<<endl;
	}
}