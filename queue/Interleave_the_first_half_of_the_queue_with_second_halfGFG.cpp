class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
       stack<int> st;
       int n=q.size();
       for(int i=1;i<=n/2;i++){
           st.push(q.front());
           q.pop();
       }
       while(st.size() > 0){
           q.push(st.top());
           st.pop();
       }
       for(int i=1;i<=n/2;i++){
           st.push(q.front());
           q.pop();
       }
       for(int i=1;i<=n/2;i++){
           // st to q
           q.push(st.top());
           st.pop();
           // q to q
           q.push(q.front());
           q.pop();
       }
       // reverse the queue
       while(q.size() > 0){
           st.push(q.front());
           q.pop();
       }
       while(st.size() > 0){
           q.push(st.top());
           st.pop();
       }
    }
};
