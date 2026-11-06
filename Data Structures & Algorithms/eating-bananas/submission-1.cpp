class Solution {
private:
    bool isPossible(long long mid, int h, vector<int>&piles){
        int k = 0;
        for(int i=0; i<piles.size(); i++){
            k+=((piles[i]/mid) + 1);
            if(piles[i]%mid==0)k--;
        }
        return k<=h;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long total = 0;
        long long ans = 1e9;
        //sort(piles.begin(), piles.end());
         for(auto it: piles){
            total+=it;
        }
        long long low = 1, high = total;
        while(low<=high){
            long long mid = (low+high)/2;
            if(isPossible(mid, h, piles)){
                ans = min(ans, mid);
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        return ans;
    }
};
