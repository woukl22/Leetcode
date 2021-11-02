/*
woukl22
2021.11.02
In-Place Operations - Move Zeroes
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;
        for(int i = 0; i < size(nums); i++){
            if(nums[i] != 0){
                nums[k++] = nums[i];
            }
        }
        for(int i = k; i < size(nums); i++){
            nums[i] = 0;
        }
    }
};