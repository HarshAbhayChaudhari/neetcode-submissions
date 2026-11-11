class MinStack {
    vector<int>vec;
    int mini = 1e9;
    vector<int>minvec;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        vec.push_back(val);
        if(minvec.size() == 0){
            minvec.push_back(val);
        }
        else{
            minvec.push_back(min(val, minvec.back()));
        }
    }
    
    void pop() {
        vec.pop_back();
        minvec.pop_back();
    }
    
    int top() {
        int sz = vec.size()-1;
       return vec[sz]; 
    }
    
    int getMin() {
        return minvec.back();
    }
};
