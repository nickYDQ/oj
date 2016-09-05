class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> stack1;
    stack<int> stack2;
    MinStack() {
        
    }
    
    void push(int x) {
        stack1.push(x);
        if(stack2.empty())
        {
            stack2.push(x);
        }
        else if(x>=stack2.top())
        {
            stack2.push(stack2.top());
        }
        else if(x<stack2.top())
        {
            stack2.push(x);
        }
        
    }
    
    void pop() {
      
        if(stack1.size()>0)
        {
            stack1.pop();
            stack2.pop();
        }
    }
    
    int top() {
        
        return stack1.top();
    }
    
    int getMin() {
        
        return stack2.top();
        
    }
};
