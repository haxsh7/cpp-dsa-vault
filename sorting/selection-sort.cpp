// C++ program for optimized implementation of Selection sort
#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>& nums,int n){
    for(int i = 0; i<n-1; i++){
        int smidx = i;
        for(int j=i;j<n;j++){
            if(nums[smidx]>nums[j]){
                smidx=j;
            }
        }
        swap(nums[i],nums[smidx]);
    }
}

int main(){

    vector<int> nums = {0,1,1,0,1,2,2,3,4,5,2,1,11,1};
    int n = nums.size();

    selectionSort(nums,n);

    for(int i = 0; i<n; i++){
        cout<<nums[i]<<" "; 
    }

    return 0;
}