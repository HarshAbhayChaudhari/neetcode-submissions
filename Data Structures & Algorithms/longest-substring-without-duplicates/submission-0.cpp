class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int>mpp;
        int ans = 0;
        int left = 0;
        for(int i=0; i<s.size(); i++){
            if(mpp.find(s[i]) != mpp.end()){
                left = max(left, mpp[s[i]]+1);
            }
            mpp[s[i]] = i;
            ans = max(ans, i-left+1);
        }
        return ans;
    }
};
