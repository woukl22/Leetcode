/*
woul22
2021.10.24

Introduction - Max Consecutive Ones
*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0, count = 0;
        for(int i = 0; i < size(nums); i++){
            if(nums[i] == 1){
                count++;
            } else if(nums[i] == 0){
                if(max < count)
                    max = count;
                count = 0;
            }
        }
        
        if(max < count)
            max = count;
        
        return max;
    }
};