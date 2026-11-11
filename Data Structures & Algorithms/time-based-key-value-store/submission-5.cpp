class TimeMap {
    unordered_map<string, vector<pair<int, string>>>mpp;
public:
    TimeMap() {

    }
    
    void set(string key, string value, int timestamp) {
        if(value!=""){
            mpp[key].push_back({timestamp, value});
        }
    }
    
    string get(string key, int timestamp) {
        if(mpp.find(key) == mpp.end())return "";
        int sz = mpp[key].size()-1;
        int low = 0;
        int high = sz;
        string result = "";
        while(low<=high){
            int mid = (low+high)/2;
            if(mpp[key][mid].first<=timestamp){
                result = mpp[key][mid].second;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        // for(int i=mpp[key].size()-1; i>=0; i--){
        //     auto pp = mpp[key][i];
        //     if(pp.first<=timestamp)return pp.second;
        // }
        return result;
    }
};
