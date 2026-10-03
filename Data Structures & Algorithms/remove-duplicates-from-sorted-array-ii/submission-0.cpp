class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 0;
        for(int num : nums){
            if( l < 2 || num != nums[l-2]){
                nums[l++] = num;
            }
        }
        return l;
    }
};