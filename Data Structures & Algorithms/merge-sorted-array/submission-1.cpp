class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int last_n1 = m+n-1;
        while (m > 0 && n > 0) {
            if (nums1[m-1] > nums2[n-1]) {
                nums1[last_n1] = nums1[m-1];
                --m;
            }
            // handle when greater
            else {
                nums1[last_n1] = nums2[n-1];
                --n;
            }
            --last_n1;
        }

        while (n > 0) {
            nums1[last_n1] = nums2[n-1];
            --n;
            --last_n1;
        }

    }
};