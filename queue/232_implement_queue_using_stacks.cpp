class MyQueue {
    stack<int> s1,s2;
public:
    MyQueue() {

    }
    
    void push(int x) {
      s1.push(x);    
    }
    
    int pop() {
        // s1 ke elements s2 mein transfer karo
        if(s2.size() == 0){
            while(s1.size() > 0){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int ans=s2.top();
        s2.pop();
        return ans;
    }
    
    int peek() {
        if(s2.size() == 0){
            while(s1.size() > 0){
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }
    
    bool empty() {
        if(s1.size() == 0 && s2.size() == 0){
            return true;
        }
        return false;
    }
};
