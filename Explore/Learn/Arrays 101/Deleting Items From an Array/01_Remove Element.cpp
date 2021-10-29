/*
woukl22
2021.10.29
Deleting Items From an Array - Remove Element
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {        
        int k = 0, count = size(nums) - 1;
        vector<int> expectedNums(size(nums));        
        for(int i = 0; i <= count; i++){
            if(nums[i] != val){
                expectedNums[k++] = nums[i];
            } else if(nums[i] == val){
                if(nums[count] == val){
                    count--;
                    i--;
                } else{
                    expectedNums[k++] = nums[count--];
                }
            }
        }
        nums = expectedNums;
        
        return k;
    }
};