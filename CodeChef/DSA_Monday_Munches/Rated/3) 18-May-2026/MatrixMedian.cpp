// Problem Link - https://www.codechef.com/DSAMONDAY003/problems/MATRIXMEDIAN

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    return 0;
}

void insertionSort(vector<int>&arr, int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
    
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int findMedian(vector<vector<int>>& matrix, int N, int M) {
    //write code here...
    vector<int> arr;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            arr.push_back(matrix[i][j]);
        }
    }
    insertionSort(arr,N*M);
    return arr[(N*M)/2];
}
