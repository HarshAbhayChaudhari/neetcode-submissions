class Solution {
public:
    void recursion(int ind, vector<int>&nums, 
    vector<vector<int>>&ans, vector<int>&vec){
        if(ind >= nums.size()){
            ans.push_back(vec);
            return;
        }
        int i=0;
        for(i = ind; i<nums.size(); i++){
            if(i!=ind && nums[i] == nums[i-1])continue;
            vec.push_back(nums[i]);
            recursion(i+1, nums, ans, vec);
            vec.pop_back();    
        }
        recursion(i+1, nums, ans, vec);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>vec;
        sort(nums.begin(), nums.end());
        recursion(0, nums, ans, vec);
        return ans;
    }
};
