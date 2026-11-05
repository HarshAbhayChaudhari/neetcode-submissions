class Solution {
public:
    int trap(vector<int>& height) {
        int sz = height.size();
        int ans = 0;
        vector<int>prefix(sz);
        vector<int>suffix(sz);
        prefix[0]=height[0];
        suffix[sz-1]=height[sz-1];
        for(int i=1; i<height.size(); i++){
            prefix[i] = max(height[i], prefix[i-1]);
        }
        for(int i=height.size()-2; i>=0; i--){
            suffix[i] = max(height[i], suffix[i+1]);
        }

        for(int i=0; i<height.size(); i++){
            if(height[i]<min(prefix[i], suffix[i])){
                ans = ans + (min(prefix[i], suffix[i]) - height[i]);
            }
        }
        return ans;
    }
};
