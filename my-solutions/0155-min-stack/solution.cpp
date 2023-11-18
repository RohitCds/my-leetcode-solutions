#include <stack>

class MinStack {
    long long min;  
    stack<long long> s;  

public:
    MinStack() {
    }

    void push(int val) {
        if (s.empty()) {
            min = val;
            s.push(val);
        } else if (val <= min) {
            s.push(2LL * val - min);  
            min = val;
        } else {
            s.push(val);
        }
    }

    void pop() {
        long long t = s.top();
        s.pop();
        if (t <= min) {
            min = 2LL * min - t;  
        }
    }

    int top() {
        if (s.top() <= min) {
            return min;
        } else {
            return s.top();
        }
    }

    int getMin() {
        return min;
    }
};


/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
