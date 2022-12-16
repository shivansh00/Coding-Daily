class MyQueue {
    stack<int> q, rq;

public:
    MyQueue() {

    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        while (!q.empty()) {
            rq.push(q.top());
            q.pop();
        }
        int ret= rq.top();
        rq.pop();
        while (!rq.empty()) {
            q.push(rq.top());
            rq.pop();
        }
        return ret;
    }
    
    int peek() {
        while (!q.empty()) {
            rq.push(q.top());
            q.pop();
        }
        int ret= rq.top();
        while (!rq.empty()) {
            q.push(rq.top());
            rq.pop();
        }
        return ret;
    }
    
    bool empty() {
        return q.empty();
    }
};
