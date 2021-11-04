/*
woukl22
2021.11.04
Conclusion - Height Checker
*/

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected(size(heights));
        expected = heights;
        sort(expected.begin(), expected.end());
        int count = 0;
        for(int i = 0; i < size(heights); i++){
            if(expected[i] != heights[i])
                count++;
        }
        return count;
    }
};