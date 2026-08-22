class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int n= arr.size();
        vector<int> ans(2,-1);
        // first occurence
        int lo=0, hi=n-1;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(arr[mid]>target) hi=mid-1;
            else if(arr[mid]<target) lo=mid+1;
            else{ //arr[mid] == target
               ans[0]=mid;
               hi=mid-1;
            }
        }
        // last occurence
        lo=0;
        hi=n-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(arr[mid]>target) hi=mid-1;
            else if(arr[mid]<target) lo=mid+1;
            else{
                ans[1]=mid;
                lo=mid+1;
            }
        }
        return ans;
    }
};
