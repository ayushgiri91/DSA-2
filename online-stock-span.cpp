// https://leetcode.com/problems/online-stock-span/submissions/1282952746

class StockSpanner {
public:
vector<int>vec;
    StockSpanner() {
        
    }
    
    int next(int price) {
        
        vec.push_back(price);
        int count=1;
        int i=vec.size()-2;
        while(i>=0 && vec[i]<=price){
            i--;
            count++;
        }
    return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */