class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>answer;
        if(nums.size()==3){
            int sum = 0;
            for(auto it: nums){
                sum+=it;
            }
            if(sum==0){
                answer.push_back(nums);
            }
            return answer;
        }
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-2; i++){
            //if(nums[i] == nums[i+1])continue;
            int first = -1 * nums[i];
            int low = i+1;
            int high = nums.size()-1;
            while(low<high){
                if(nums[low] + nums[high]>first){
                    high--;
                }
                else if(nums[low] + nums[high]<first){
                    low++;
                }
                else if(nums[low] + nums[high] == first){
                    vector<int>ans;
                    ans.push_back(-1*first);
                    ans.push_back(nums[low]);
                    ans.push_back(nums[high]);
                    answer.push_back(ans);
                    while(low<high && nums[low]==nums[low+1])low++;
                    while(high>low && nums[high]==nums[high-1])high--;
                    low++;
                    high--;
                }
            }
            while(i<nums.size()-1 && nums[i] == nums[i+1])i++;
        }
        return answer;
    }
};
