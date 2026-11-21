class Solution {
public:
    void recursion(int ind, string s, vector<string>&ans, 
    string digits, map<int, string>&mpp){
        if(ind == digits.size()){
            ans.push_back(s);
            return;
        }

        string cur = mpp[digits[ind] - '0'];

        for(auto it : cur){
            recursion(ind+1, s+it, ans, digits, mpp);
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.empty())return ans;
        string s = "";
        map<int, string>mpp;
        mpp[2] = "abc";
        mpp[3] = "def";
        mpp[4] = "ghi";
        mpp[5] = "jkl";
        mpp[6] = "mno";
        mpp[7] = "pqrs";
        mpp[8] = "tuv";
        mpp[9] = "wxyz";

        recursion(0, "", ans, digits, mpp);
        return ans;
    }
};
