// https://leetcode.com/problems/design-browser-history/submissions/1282915798

class BrowserHistory {
public:
    stack<string> st;
    stack<string> st1;
    BrowserHistory(string homepage) {
        st.push(homepage);
    }
    
    void visit(string url) {
        while (!st1.empty()) {
            st1.pop();} 
        st.push(url);
    }
    
    string back(int steps) {
        while (steps > 0 && st.size() > 1) { 
            st1.push(st.top());
            st.pop();
            steps--;
        }
        return st.top();
    }
    
    string forward(int steps) {
        while (steps > 0 && !st1.empty()) { 
            st.push(st1.top());
            st1.pop();
            steps--;
        }
        return st.top();
    }
};