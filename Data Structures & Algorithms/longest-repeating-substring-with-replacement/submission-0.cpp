class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char, int>mpp;
        int l = 0, maxf = 0, res = 0;
        for(int r = 0; r<s.size(); r++){
            mpp[s[r]]++;
            maxf = max(maxf, mpp[s[r]]);

            while((r-l+1)-maxf > k){
                mpp[s[l]]--;
                l++;
            }
            res = max(res, r-l+1);
        }
        return res;
    }
};
