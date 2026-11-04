class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>answer;
        int left = 0;
        int right = numbers.size()-1;
        while(true){
            if(numbers[left] + numbers[right] == target){
                answer.push_back(left+1);
                answer.push_back(right+1);
                return answer;
            }

            if(numbers[left] + numbers[right] > target){
                right--;
            }
            else{
                left++;
            }
        }
        return answer;
    }
};
