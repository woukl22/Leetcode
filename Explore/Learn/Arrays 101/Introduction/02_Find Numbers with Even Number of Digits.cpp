/*
woul22
2021.10.25
Introduction - Find Numbers with Even Number of Digits
*/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even = 0, count = 0;
        for(int i = 0 ; i < size(nums); i++){
            while(nums[i] > 0){
                nums[i] /= 10;
                count++;
            }
            if(count%2==0)
                even++;
            count = 0;
        }
        return even;
    }
};