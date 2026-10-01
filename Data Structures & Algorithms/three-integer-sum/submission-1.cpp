class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for(int k = 0;k < n-2;k++){
            int i = k+1;
            int j = n-1;

            while(i < j){
                int sum = nums[k] + nums[i] + nums[j];
                if(sum == 0){
                    ans.push_back({nums[k], nums[i], nums[j]});
                    break;
                }
                else if(sum < 0){
                    i++;
                }
                else j--;
            }
        }
        return ans;
    }
};