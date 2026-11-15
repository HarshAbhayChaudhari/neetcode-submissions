class Solution {
public:
    void recursion(int ind, vector<vector<int>>&ans, 
    vector<int>&vec, vector<int>&nums){
        if(ind == nums.size()){
            ans.push_back(vec);
            return;
        }
        vec.push_back(nums[ind]);
        recursion(ind+1, ans, vec, nums);
        vec.pop_back();
        recursion(ind+1, ans, vec, nums);

    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>vec;
        recursion(0, ans, vec, nums);
        return ans;
    }
};
