/*
woukl22
2021.11.01
In-Place Operations - Replace Elements with Greatest Element on Right Side
*/

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        if(size(arr) == 1){
            arr[0] = -1;
        } else{
            for(int i = 0; i < size(arr)-1; i++){
                int max_idx = i+1;
                for(int j = i+1; j < size(arr); j++){
                    if(arr[max_idx] < arr[j]){
                        max_idx = j;
                    }
                    if(j == size(arr)-1){
                        for(int k = i; k < max_idx; k++){
                            arr[k] = arr[max_idx];
                        }
                        i = max_idx-1;
                    }
                }
            }
            arr[size(arr)-1] = -1;
        }
        
        return arr;
    }
};