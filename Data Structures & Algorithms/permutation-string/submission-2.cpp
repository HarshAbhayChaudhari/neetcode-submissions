class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size())return false;
        if(s1.size()==s2.size()){
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());
            return s1==s2;
        }
        int sz = s1.size();
        int l = 0;
        bool flag = false;
        sort(s1.begin(), s1.end());
        while(l<=s2.size()-sz){
            string ss = s2.substr(l, sz);
            sort(ss.begin(), ss.end());
            if(ss==s1)flag = true;
            l++;
        }
        return flag;
    }
};
