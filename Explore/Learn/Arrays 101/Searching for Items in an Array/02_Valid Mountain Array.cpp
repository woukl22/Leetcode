/*
woukl22
2021.10.31
Searching for Items in an Array - Valid Mountain Array
*/

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int check = -1;
        if(size(arr) <= 2){
            return false;
        } else{
            for(int i = 1; i < size(arr); i++){
                if(arr[i-1] == arr[i]){
                    return false;
                } else if((i == 1 && arr[i-1] < arr[i]) || (check == 0 && arr[i-1] > arr[i]) || (check == 1 && arr[i-1] < arr[i])){
                    check++;
                }
            }
        }
        if(check == 1){
            return true;
        } else{
            return false;
        }
    }
};