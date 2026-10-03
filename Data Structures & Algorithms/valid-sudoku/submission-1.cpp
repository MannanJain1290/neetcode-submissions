class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = 9;
        unordered_set<char> row[n];
        unordered_set<char> col[n];
        unordered_set<char> box[n];

        for(int r = 0; r < n;r++){
            for(int c = 0; c < n;c++){
                char val = board[r][c];
                if(val == '.') continue;

                int box_idx = (r / 3) * 3 + (c / 3);

                if(row[r].count(val) || col[c].count(val) || box[box_idx].count(val)) return false;

                row[r].insert(val);
                col[c].insert(val);
                box[box_idx].insert(val);
            }
        }
        return true;
    }
};
