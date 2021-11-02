/*
woukl22
2021.11.02
In-Place Operations - Remove Duplicates from Sorted Array
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        for(int i = 0; i < size(nums); i++){
            if(i == 0 || nums[i] != nums[i-1]){
                nums[k++] = nums[i];
            }
        }
        return k;
    }
};