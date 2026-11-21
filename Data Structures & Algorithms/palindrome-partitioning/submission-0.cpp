class Solution {
public:
    bool isPalindrome(string s, int left, int right){
        while(left<=right){
            if(s[left++]!=s[right--])return false;
        }
        return true;
    }
    void recursion(int ind, vector<vector<string>>&ans,
     vector<string>&vec, string s){
        if(ind == s.size()){
            ans.push_back(vec);
            return;
        }

        for(int i=ind; i<s.size(); i++){
            string sub = s.substr(ind, i-ind+1);
            if(isPalindrome(s, ind, i)){
                vec.push_back(sub);
                recursion(i+1, ans, vec, s);
                vec.pop_back();
            }
        }
     }

    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>vec;
        recursion(0, ans, vec, s);
        return ans;
    }
};
