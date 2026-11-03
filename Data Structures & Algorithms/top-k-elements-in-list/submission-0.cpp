class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int>mpp;
        priority_queue<pair<int, int>>pq;
        vector<int>answer;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }

        for(auto it: mpp){
            pq.push({it.second, it.first});
        }

        while(k--){
            auto ans = pq.top().second;
            pq.pop();
            answer.push_back(ans);
        }
        return answer;
    }
};
