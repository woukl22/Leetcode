/*
woukl22
2021.11.07
Introduction to Array - Largest Number At Least Twice of Others
*/

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if(size(nums) == 1){
            return 0;
        }
        int first = -2, second = -2;
        for(int i = 0; i < size(nums); i++){
            if(i == 0){
                first = i;
            } else if(nums[first] < nums[i]){
                second = first;
                first = i;
            } else if((second == -2 || nums[i] > nums[second]) && nums[first] > nums[i]){
                second = i;
            }
        }
        
        if(nums[first] >= nums[second]*2){
            return first;
        } else{
            return -1;
        }
        
    }
};