class Solution {
public:
    void recursion(int ind, vector<string>&vec, vector<vector<string>>&ans, 
    vector<int>&roww, vector<int>&lowerdiagonal,
     vector<int>&upperdiagonal, int n){

        if(ind == n){
            ans.push_back(vec);
            return;
        }
        for(int i=0; i<n; i++){
            if(roww[i] == -1 && lowerdiagonal[i+ind] == -1 
            && upperdiagonal[n-1+ind-i] == -1){
                roww[i] = 1;
                lowerdiagonal[i+ind] = 1;
                upperdiagonal[n-1+ind-i] = 1;
                vec[i][ind] = 'Q';
                recursion(ind+1, vec, ans, roww, lowerdiagonal, upperdiagonal, n);
                vec[i][ind] = '.';
                roww[i] = -1;
                lowerdiagonal[i+ind] = -1;
                upperdiagonal[n-1+ind-i] = -1;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<int>roww(n, -1);
        vector<int>lowerdiagonal(2*n, -1);
        vector<int>upperdiagonal(2*n, -1);
        vector<vector<string>>ans;
        vector<string>vec;
        string s = "";
        for(int i=0; i<n; i++){
            s.push_back('.');
        }
        for(int i=0; i<n; i++){
            vec.push_back(s);
        }
        recursion(0, vec, ans, roww, lowerdiagonal, upperdiagonal, n);
        return ans;
    }
};
