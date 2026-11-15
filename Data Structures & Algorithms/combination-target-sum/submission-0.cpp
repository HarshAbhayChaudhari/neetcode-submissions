class Solution {
public:
    void recursion(int ind, vector<vector<int>>&res, 
    vector<int>&vec, vector<int>&nums, int target){
        if(ind == nums.size()){
            if(target == 0){
                res.push_back(vec);
            }
            return;
        }

        if(nums[ind]<=target){
            vec.push_back(nums[ind]);
            recursion(ind, res, vec, nums, target-nums[ind]);
            vec.pop_back();
        }
        recursion(ind+1, res, vec, nums, target);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        vector<int>vec;
        recursion(0, res, vec, nums, target);
        return res;
    }
};
