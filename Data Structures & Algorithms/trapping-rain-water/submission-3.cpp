class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0;
        int r= height.size() -1;
        int lmax = height[0];
        int rmax = height[r];

        int cnt = 0;

        while( l < r){
            if(lmax <= rmax){
                l++;
                lmax = max(lmax , height[l]);
                cnt += lmax - height[l];
            }
            else{
                r--;
                rmax = max(rmax , height[r]);
                cnt += rmax - height[r];
            }
        }
        return cnt;
    }
};
