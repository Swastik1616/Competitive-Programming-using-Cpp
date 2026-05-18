// Problem Link - https://www.codechef.com/DSAMONDAY003/problems/FINDPEAK

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    return 0;
}

    int findPeakElement(const vector<int>& nums) {
        // write your code here
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) return mid;
            else if(nums[mid]<nums[mid-1]) r = mid + 1;
            else l = mid + 1;
        }
    }
    