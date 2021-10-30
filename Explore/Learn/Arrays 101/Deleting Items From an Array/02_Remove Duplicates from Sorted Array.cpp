/*
woukl22
2021.10.30
Deleting Items From an Array - Remove Duplicates from Sorted Array
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> expectedNums(size(nums));
        int k = 0;
        for(int i = 0; i < size(nums); i++){
            if(k == 0 || expectedNums[k-1] != nums[i]){
                expectedNums[k++] = nums[i];
            }
        }
        nums = expectedNums;
        return k;
    }
};