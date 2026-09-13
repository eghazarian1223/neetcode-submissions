class Solution {
public:

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // time o(m+n) 
        // space o(1)
        int last = m + n - 1;
        // dont know m or n greater
        while (m > 0 && n > 0) {
            // should we compare elements from front or starting from back?
            // front ! back is unsafe and oob unless nums1 nums2 same size
            if (nums1[m-1] > nums2[n-1]) {
                nums1[last] = nums1[m-1];
                --m;    
            }
            // less than or equal
            else {
                nums1[last] = nums2[n-1];
                --n;
            }
            --last;
        }
        // m is 0
        while (n > 0) {
            nums1[last] = nums2[n-1];
            --n;
            --last;
        }  
    }
};