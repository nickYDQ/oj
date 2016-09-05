class Queue {
public:
    stack<int> stack1;
    stack<int> stack2;
    // Push element x to the back of queue.
    void push(int x) {
    
        stack1.push(x);
       
    }

    // Removes the element from in front of queue.
    void pop(void) {
        
        
        if(stack2.size()<=0)
        {
            while(stack1.size()>0)
            {
                int data = stack1.top();
                stack1.pop();
                stack2.push(data);
            }
        }
        stack2.pop();
        
        
    }

    // Get the front element.
    int peek(void) {
        if(empty())
        {
            return 0;
        }
        if(!stack2.empty())
        {
            return stack2.top();
        }else{
            while(stack1.size()!=0)
            {
                stack2.push(stack1.top());
                stack1.pop();
            }
            return stack2.top();
        }
    }


    // Return whether the queue is empty.
    bool empty(void) {
        if(stack1.empty()&&stack2.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};