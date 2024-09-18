class MyStack {
public:   queue <int> q1;
        queue <int> q2;
    MyStack() {
     
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        // for(int i=0;i<q1.size();i++)
        // {q2.push(q2.front());
        // q1.pop();}
        // return  q2.front();
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();}
            int p=q1.front();
            q1.pop();   // auxilary queue that can help u later
            swap(q1,q2);
            return p;

        }

    
    int top() {
        return q1.back();
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */