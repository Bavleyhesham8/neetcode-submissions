

struct pair_hash {
    size_t operator()(const pair<int,int>& p) const noexcept {
        return (static_cast<size_t>(p.first) << 32) ^ static_cast<size_t>(p.second);
    }
};

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       unordered_map<int, unordered_set<char>> row;
       unordered_map<int, unordered_set<char>> col;
       unordered_map<pair<int,int>, unordered_set<char>, pair_hash> mat;
       for(int i = 0; i < 9; i++){
           for(int j = 0; j < 9; j++){
               char c = board[i][j];
               if (c == '.') continue;
               pair<int,int> key = { i / 3, j / 3 };
               if (row[i].find(c) != row[i].end() ||
                   col[j].find(c) != col[j].end() ||
                   mat[key].find(c) != mat[key].end()) {
                   return false;
               }
               row[i].insert(c);
               col[j].insert(c);
               mat[key].insert(c);
           }
       }
       return true;
    }
};
