class Solution {
public:
    int maxArea(vector<int>& heights) {
        int answer = 0;
        int left = 0;
        int right = heights.size()-1;

        while(left<right){
            if(heights[right]>heights[left]){
                answer = max(answer, heights[left]*(right-left));
                left++;
            }
            else{
                answer = max(answer, heights[right]*(right-left));
                right--;
            }
        }
        return answer;
    }
};
