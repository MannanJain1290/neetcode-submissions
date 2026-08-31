class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] > nums[mid + 1]) {
                r = mid;       // peak is at mid or to the left
            } else {
                l = mid + 1;   // peak is to the right
            }
        }
        return l;
    }
};