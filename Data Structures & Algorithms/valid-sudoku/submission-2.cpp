class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for(int i=0; i<9; i++){
            unordered_map<char, int>mpp1;
            unordered_map<char, int>mpp2;
            unordered_map<char, int>mpp3;
            for(int j=0; j<9; j++){
                if(board[i][j] != '.')mpp1[board[i][j]]++;
                if(board[j][i] != '.')mpp2[board[j][i]]++;
                if(board[(i/3)*3 + j/3][(i%3)*3 + j%3] != '.'){
                    mpp3[board[(i/3)*3 + j / 3][(i%3)*3 + j%3]]++;
                }
                if(mpp1[board[i][j]] >= 2 || mpp2[board[j][i]] >= 2 
                || mpp3[board[(i/3)*3 + j/3][(i%3)*3 + j%3]] >= 2)return false;
            }
        }
        return true;
    }
};
