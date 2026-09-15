class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size() - 1;
        int area = 0;
        while(l < r){
            int len = min(heights[l], heights[r]);
            int wid = r-l;
            area = max(area, len * wid);
            if(heights[l] < heights[r]) l++;
            else r--;
        }
        return area;
    }
};
