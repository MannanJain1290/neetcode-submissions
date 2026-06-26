class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> res;
        sort(nums.begin(), nums.end());
        res = nums;
        return res;
    }
};