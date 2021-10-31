/*
woukl22
2021.10.31
Searching for Items in an Array - Check If N and Its Double Exist
*/

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i = 0; i < size(arr); i++){
            for(int j = i+1; j < size(arr); j++){
                if(arr[i]*2 == arr[j] || arr[i] == arr[j]*2){
                    return true;
                }
            }
        }
        return false;
    }
};