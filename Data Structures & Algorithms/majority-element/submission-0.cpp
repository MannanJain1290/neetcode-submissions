class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        int n = nums.size();
        for(int i = 0; i < n; i ++){
            mp[nums[i]]++;
        }
        n = n/2;
        for(auto m:mp){
            if(m.second > n) return m.first;
        }
        return 0;
    }
};
