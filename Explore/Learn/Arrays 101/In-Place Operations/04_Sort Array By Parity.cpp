/*
woukl22
2021.11.03
In-Place Operations - Sort Array By Parity
*/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        for(int i = 0; i < size(nums); i++){
            if(nums[i]%2 == 1){
                for(int j = size(nums)-1; j > i; j--){
                    if(nums[j]%2 == 0){
                        int temp = nums[i];
                        nums[i] = nums[j];
                        nums[j] = temp;
                        break;
                    }
                }
            }
        }
        return nums;
    }
};