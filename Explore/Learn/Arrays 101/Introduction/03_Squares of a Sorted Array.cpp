/*
woul22
2021.10.25
Introduction - Squares of a Sorted Array
*/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i = 0; i < size(nums); i++){
            nums[i] *= nums[i];
        }
        sort(nums.begin(), nums.end());
        
        return nums;
    }
};