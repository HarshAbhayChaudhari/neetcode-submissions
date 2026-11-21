class Solution {
public:
    void recursion(int open, int close, int n, vector<string>&ans, string ss){

        if(ss.size() == 2*n){
            ans.push_back(ss);
            return;
        }

        if(open<n){
            ss.push_back('(');
            recursion(open+1, close, n, ans, ss);
            ss.pop_back();
        }
        if(close<open){
            ss.push_back(')');
            recursion(open, close+1, n, ans, ss);
            ss.pop_back();
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string ss = "";
        recursion(0, 0, n, ans, ss);
        return ans;
    }
};
