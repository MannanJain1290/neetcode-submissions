class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int a = 0, b = 0;
        int n = grid.size();
        map<int, int> mp;
    
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                mp[grid[i][j]]++;
            }
        }
        
        for (int num = 1; num <= n * n; num++) {
            int freq = mp[num];
            if (freq == 0) b = num;
            if (freq == 2) a = num;
        }

        return {a, b};
    }
};