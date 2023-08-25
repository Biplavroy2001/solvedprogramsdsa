/*leetcode:move zeroes Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.
Example 1:
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]*/
#include<iostream>
#include<vector>
using namespace std;  
void merge(vector<int>& nums){
int zero=0;
for(int j=0;j<nums.size()-1;j++){
    if(nums[j]!=0){
        swap(nums[j],nums[zero]);
        zero++; 

    }
}
}