/*
woukl22
2021.11.05
Conclusion - Third Maximum Number
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int *first, *second, *third;
        first = second = third = NULL;
        for(int i = 0; i < size(nums); i++){
            if(!first){
                first = &nums[i];
            } else if(!second && !third){
                if(nums[i] > *first){
                    second = first;
                    first = &nums[i];
                } else if(*first > nums[i]){
                    second = &nums[i];
                }
            } else{
                if(nums[i] > *first){
                    third = second;
                    second = first;
                    first = &nums[i];
                } else if(*first > nums[i]){
                    if(nums[i] > *second){
                        third = second;
                        second = &nums[i];
                    } else if(*second > nums[i]){
                        if(!third || nums[i] > *third){
                            third = &nums[i];    
                        }
                    }
                }
            }
        }
        if(!third){
            return *first;
        } else{
            return *third;
        }
    }
};