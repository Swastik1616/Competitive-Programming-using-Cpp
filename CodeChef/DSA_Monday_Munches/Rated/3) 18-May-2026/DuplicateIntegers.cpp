// Problem Link - https://www.codechef.com/DSAMONDAY003/problems/DSAAGP384

bool hasDuplicate(const vector<int>& nums) {
    int n = nums.size();
    int c = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]==nums[j]) {
                c = 1;
                break;
            }
        }
    }
    if(c==1) return true;
    else return false;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    return 0;
}
