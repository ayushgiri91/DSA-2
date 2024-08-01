// https://leetcode.com/problems/design-a-stack-with-increment-operation/submissions/1283002154

class CustomStack{
    // stack<int>st;
    vector<int>vec;
    int max1;
public:
    CustomStack(int maxSize) {
         max1=maxSize;
    }
    
    void push(int x) {
        if (vec.size()<max1){
        vec.push_back(x);
    }}
    
    int pop() {
        if (vec.size()==0) return -1;
        int p=vec[vec.size()-1];
        vec.pop_back();
     return p;
    }
    
    void increment(int k, int val) {
        int p=min(k,(int)vec.size());
        for(int i=0;i<p;i++){
            vec[i]= val+vec[i];
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */