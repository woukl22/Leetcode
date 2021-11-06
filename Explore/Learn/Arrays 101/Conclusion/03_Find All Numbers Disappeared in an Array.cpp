/*
woukl22
2021.11.06
Conclusion - Find All Numbers Disappeared in an Array
*/

#include <bits/stdc++.h>;
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int sizeNums = size(nums);
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        
        vector<int> result(sizeNums - size(nums));
        int count = 0, resCount = 0;
        cout << sizeNums << " " << size(nums) << '\n';
        
        for(int i = 1; i <= sizeNums; i++){
            if(i != nums[count]){
                result[resCount++] = i;
            } else{
                count++;
            }
        }
        
        return result;
    }
};