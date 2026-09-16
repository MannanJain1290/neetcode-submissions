class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> count;
        count[0] = 1;
        int current_sum = 0, total_subarrays = 0;

        for (int num : nums) {
            current_sum += num;
            if (count.find(current_sum - goal) != count.end()) {
                total_subarrays += count[current_sum - goal];
            }
            count[current_sum]++;
        }

        return total_subarrays;
    }
};