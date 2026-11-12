class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>answer(temperatures.size());
        stack<pair<int, int>>st;
        for(int i=temperatures.size()-1; i>=0; i--){
            while(!st.empty() && st.top().first <= temperatures[i]){
                st.pop();
            }

            if(!st.empty()){
                answer[i] = st.top().second - i;
            }
            else {
                answer[i] = 0;
            }

            st.push({temperatures[i], i});
        }
        return answer;
    }
};
