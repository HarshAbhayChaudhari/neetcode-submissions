class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> answer;
        if(strs.size() == 0)return answer;
        map<string, vector<int>>mpp;

        for(int i=0; i<strs.size(); i++){
            string s = strs[i];
            sort(s.begin(), s.end());
            mpp[s].push_back(i);
        }

        for(auto it: mpp){
            vector<string>vec;
            for(auto itt: it.second){
                vec.push_back(strs[itt]);
            }
            answer.push_back(vec);
        }

        return answer;
    }
};
