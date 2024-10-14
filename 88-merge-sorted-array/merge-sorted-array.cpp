class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int w = m + n - 1;
        int i = m - 1;
        int j = n - 1;

        if (m!=0 && n!=0) {
            while (i >= 0 && j >= 0) {
                if (nums1[i] >= nums2[j]){
                    nums1[w] = nums1[i];
                    i--;
                } else {
                    nums1[w] = nums2[j];
                    j--;
                }
                w--;
            }
        } else if (m == 0) {
            nums1 = nums2;
        }
        // while (i >= 0) {
        //     nums1[w] = nums1[i];
        //     i--;
        //     w--;
        // }      
        while (j >= 0) {
            nums1[w] = nums2[j];
            j--;
            w--;
        }         
    }
};