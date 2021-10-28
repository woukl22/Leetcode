/*
woukl22
2021.10.28
Inserting Items Into an Array - Merge Sorted Array
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> arr(m+n);
        int m_count = 0, n_count = 0;
        for(int i = 0; i < m+n; i++){
            if(m_count == m){
                arr[i] = nums2[n_count++];
            } else if(n_count == n){
                arr[i] = nums1[m_count++];
            } else if(nums1[m_count] <= nums2[n_count]){
                arr[i] = nums1[m_count++];
            } else if(nums1[m_count] > nums2[n_count]){
                arr[i] = nums2[n_count++];
            }
        }
        nums1 = arr;
    }
};