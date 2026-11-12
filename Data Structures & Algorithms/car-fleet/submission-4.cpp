class Solution {
    static bool comp(pair<int, int>&p1, pair<int, int>&p2){
        if(p1.first>=p2.first)return true;
        else return false;
    }
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>>vec;
        for(int i=0; i<position.size(); i++){
            vec.push_back({position[i], speed[i]});
        }
        sort(vec.begin(), vec.end(), comp);
        vector<double>st;
        for(int i=0; i<vec.size(); i++){
            double res = (double)(target-vec[i].first)/vec[i].second;
            if(st.empty() || res>st.back()){
                st.push_back(res);
            }
        }
        return st.size();
    }
};
