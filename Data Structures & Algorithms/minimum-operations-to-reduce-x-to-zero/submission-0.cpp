class Solution {
   public:
    int minOperations(vector<int>& nums, int x) {
        int target = -x;

        for (int value : nums) target += value;

        if (target < 0) return -1;
        if (target == 0) return nums.size();
        
        int left = 0, total = 0, best = -1;
        for (int right = 0; right < nums.size(); right++) {
            total += nums[right];
            while (total > target) total -= nums[left++];
            if (total == target) best = max(best, right - left + 1);
        }
        return best < 0 ? -1 : nums.size() - best;
    }
};
