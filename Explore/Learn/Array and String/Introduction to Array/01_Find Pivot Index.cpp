/*
woukl22
2021.11.08
Introduction to Array - Find Pivot Index
*/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int count = 0, left = 0, right = 0;
        for(int i = 0; i < size(nums); i++){
            count += nums[i];
        }        
        for(int i = 0; i < size(nums); i++){
            if(i == 0){
                right = count - nums[i];
            } else{
                left += nums[i-1];
                right = count - left - nums[i];
            }
            cout << "left: " << left << ", right: " << right << '\n';
            
            if(left == right){
                return i;
            }
        }
        return -1;
    }
};