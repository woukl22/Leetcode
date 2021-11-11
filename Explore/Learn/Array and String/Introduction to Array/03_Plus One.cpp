/*
woukl22
2021.11.11
Introduction to Array - Plus One
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int current = size(digits)-1;
        if(digits[size(digits)-1] != 9){
            digits[size(digits)-1]++;
        } else {
            for(current = current; digits[current] == 9 && current > 0; current--){
                if(digits[current] == 9){
                    digits[current] = 0;
                } else{
                    digits[current]++;
                }
            }
            if(current == 0){
                if(digits[current] == 9){
                    digits[current] = 0;
                    vector<int> result(size(digits)+1);
                    result[0] = 1;
                    for(int i = 1; i < size(result); i++){
                        result[i] = digits[i-1];
                    }
                    digits = result;
                } else{
                    digits[current]++;
                }
            } else{
                digits[current]++;
            }
        }
        return digits;
    }
};