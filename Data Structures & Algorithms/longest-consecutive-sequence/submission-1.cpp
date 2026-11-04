class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxi = 0;
        set<int>st;
        for(auto it: nums){
            st.insert(it);
        }

        for(int i=0; i<nums.size(); i++){
            if(st.find(nums[i]-1) == st.end()){
                int currentnum = nums[i];
                int answer = 0;
                while(st.find(currentnum)!=st.end()){
                    currentnum++;
                    answer++;
                }
                maxi = max(maxi, answer);
            }
        }
        return maxi;
    }
};
