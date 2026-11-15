class Solution {
public:
    void recursion(vector<vector<int>>&res, 
    vector<int>&vec, vector<int>&nums, vector<int>&freq){
        if(vec.size() == nums.size()){
            res.push_back(vec);
            return;
        }

        for(int i=0; i<nums.size(); i++){
            if(freq[i] == 0){
                vec.push_back(nums[i]);
                freq[i] = 1;
                recursion(res, vec, nums, freq);
                freq[i] = 0;
                vec.pop_back();
            }
        }


    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>vec;
        vector<int>freq(nums.size(), 0);
        recursion(res, vec, nums, freq);
        return res;
    }
};
