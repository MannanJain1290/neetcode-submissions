class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l = 0;
        int r = n-1;

        int ar = 0;

        while(l < r){
            int h = min(heights[l], heights[r]);
            int w = r-l;
            ar = max(ar, h*w);
            if(heights[l] < heights[r]) l++;
            else r--;
        }
        return ar;
    }
};
