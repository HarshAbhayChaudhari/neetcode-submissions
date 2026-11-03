class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>left;
        vector<int>right;
        vector<int>answer;
        left.push_back(1);
        right.push_back(1);
        int leftt = 1;
        int rightt = 1;
        for(int i=0; i<nums.size()-1; i++){
            leftt = leftt * nums[i];
            left.push_back(leftt);
        }
        for(int i=nums.size()-1; i>0; i--){
            rightt = rightt * nums[i];
            right.push_back(rightt);
        }
        for(int i=0; i<nums.size(); i++){
            answer.push_back(left[i]*right[nums.size()-1-i]);
        }
        return answer;
    }
};
