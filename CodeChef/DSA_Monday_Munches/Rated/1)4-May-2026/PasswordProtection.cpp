// Problem Link - https://www.codechef.com/DSAMONDAY001/problems/PASSPRO

#include<bits/stdc++.h>
using namespace std;

string checkPassword(int arr[], int n) {
 
    int sum = 0;
    string s;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    if(sum-n==0) s = "SECURE";
    else s = "NOT SECURE";
    
    return s;
} 

int main(){
    return 0;
}