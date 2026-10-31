class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int n=arr.size();
        deque<int> dq; // index of arr elements
        for(int i=0;i<k;i++){ // first window elements
        while(dq.size() > 0 && arr[dq.back()] < arr[i]) dq.pop_back();
        dq.push_back(i);
        }
        vector<int> ans(n-k+1);
        ans[0] = arr[dq.front()];
        // second window to last window
        for(int i=k;i<n;i++){ // i is end of window
        int j= i-k+1; // j is start of window
        while(dq.size() > 0 && arr[dq.back()] < arr[i]) dq.pop_back();
        dq.push_back(i);
        while(dq.size() > 0 && dq.front() < j) dq.pop_front();
        ans[j] = arr[dq.front()];
        }
        return ans;
    }
};
