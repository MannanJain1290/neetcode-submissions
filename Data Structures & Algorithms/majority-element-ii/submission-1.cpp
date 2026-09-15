class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        map<int,int> mp;
        for(int i = 0;i < n; i++){
            mp[nums[i]]++;
        } 
        n = n/3;
        for(auto m : mp){
            if(m.second > n) res.push_back(m.first);
        }
        return res;
    }
};