class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int l = 0;
        int r = n-1;

        vector<int> ans;

        while(l < r){
            int sum = numbers[l] + numbers[r];

            if(sum == target){
                break;
            }
            else if(sum > target){
                r--;
            }
            else l++;
        }

        return {l+1, r+1};
    }
};
