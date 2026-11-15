class Solution {
public:
    void recursion(int ind, vector<vector<int>>&res, vector<int>&vec, 
        vector<int>&nums, int target){
            if(target == 0){
                res.push_back(vec);
                return;
            }

            for(int i=ind; i<nums.size(); i++){
                if(i>ind && nums[i] == nums[i-1])continue;
                if(nums[i]>target)break;
                vec.push_back(nums[i]);
                recursion(i+1, res, vec, nums, target-nums[i]);
                vec.pop_back();
            }
        }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>vec;
        sort(candidates.begin(), candidates.end());
        recursion(0, res, vec, candidates, target);
        return res;

    }
};
