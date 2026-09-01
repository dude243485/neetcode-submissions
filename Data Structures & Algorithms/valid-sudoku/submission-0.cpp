class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char, vector<vector<int>>> hash ;
        for (int i {1}; i < 10; i++){
            hash[i + '0'] = vector<vector<int>> {};
        }

        int rows = board.size(), cols = board[0].size();
        for (int r {0}; r < rows; r++){
            for (int c { 0 }; c < cols; c++){
                char cell = board[r][c];
                if (cell != '.'){
                    for (auto& i : hash[cell]){
                        if (r == i[0] || c == i[1] || (r / 3 == i[0] / 3 && c / 3 == i[1] / 3)) return false;
                    }
                    hash[cell].push_back({r, c});
                }
            }
        }
        return true;
    }
};
