class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (int x : nums) {
            if (x > 0)
                mp[x]++;
        }

        int n = nums.size();

        for (int i = 1; i <= n + 1; i++) {
            if (mp.find(i) == mp.end())
                return i;
        }

        return n + 1;
    }
};