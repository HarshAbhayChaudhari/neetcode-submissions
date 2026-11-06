class Solution {
public:
    int findMin(vector<int> &nums) {
    int low = 0, high = nums.size()-1, res = nums[0];
        while(low<=high){
            // if(nums[low]<nums[high]){
            //     res = min(res, nums[low]);
            //     break;
            // }
            int mid = (low+high)/2;
            res = min(res, nums[mid]);
            if(nums[mid]<nums[high])high=mid-1;
            else low = mid+1;
        }
        return res;
    }
};
