/*
woukl22
2021.11.03
In-Place Operations - Remove Element
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for(int i = 0; i < size(nums); i++){
            if(nums[i] == val){
                for(int j = size(nums)-1; j > i; j--){
                    if(nums[j] != val){
                        nums[i] = nums[j];
                        nums[j] = val;
                        count++;
                        break;
                    }
                }
            } else{
                count++;
            }
        }
        return count;
    }
};