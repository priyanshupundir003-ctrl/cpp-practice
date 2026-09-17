class Solution {
  public:
  bool solve(int idx,int target,vector<int>& arr,vector<vector<int>>& dp){
      // target mil gya
      if(target==0)
      return true;
      
      // array khatam
      if(idx==arr.size())
      return false;
      
      // already calculated
      if(dp[idx][target] != -1)
      return dp[idx][target];
      
      // 1.current element ko nahi lena
      bool notTake = solve(idx+1,target,arr,dp);
      
      // 2.current element ko lena
      bool take = false;
      if(arr[idx] <= target){
          take = solve(idx+1,target-arr[idx],arr,dp);
      }
      return dp[idx][target]= take || notTake;
  }
    bool isSubsetSum(vector<int>& arr, int target) {
        int n=arr.size();
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
      return solve(0,target,arr,dp); // dp isliye add kiya kyonki simple recursion
                   //me same problem baar baar calculate ho rahi thi jo time 
                   //limit exceeded aa rha tha
        
    }
};
