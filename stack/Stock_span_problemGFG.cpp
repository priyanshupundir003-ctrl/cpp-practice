class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
       int n=arr.size();
             vector<int> ans(n,-1);
            stack<int> st;
         for(int i=0;i<n;i++){ // forward loop
       // pop mark push
      while(st.size() > 0 and arr[st.top()] <= arr[i])
         st.pop();
      if(st.size() == 0) ans[i] = -1; // no next greater found
          else ans[i] = st.top();
          st.push(i);
          }
          for(int i=0;i<n;i++){
              ans[i]=i - ans[i];
          }
          return ans;
    }
};
