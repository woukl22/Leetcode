/*
woul22
2021.10.27
Inserting Items Into an Array - Duplicate Zeros
*/

class Solution {
public: 
    void duplicateZeros(vector<int>& arr) {
        for(int i = 0; i < size(arr)-1; i++){
            if(arr[i] == 0){
                for(int j = size(arr)-1; j > i; j--){
                    arr[j] = arr[j-1];
                }
                arr[i+1] = 0;
                i++;
            }
        }
    }
};