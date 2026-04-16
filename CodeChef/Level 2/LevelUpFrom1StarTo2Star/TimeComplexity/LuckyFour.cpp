// Problem Link - https://www.codechef.com/practice/course/1to2stars/LP1TO205/problems/LUCKFOUR


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
        int num,ans=0;
        cin>>num;
        while(num != 0)
        {
            int curr_dig = num%10;
            if(curr_dig == 4)
                ans++;
            num = num/10;
        }
        cout<<ans<<endl;
	}
	return 0;
}
