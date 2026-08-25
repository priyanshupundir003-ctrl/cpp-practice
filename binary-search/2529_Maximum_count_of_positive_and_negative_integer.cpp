class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n= nums.size();
        // first positive number
        int lo=0, hi=n-1;
        int firstpos=n;

        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]>0){
                firstpos=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        // first non-negative number
         lo=0;
        hi=n-1;
        int firstNonNeg=n;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]>=0){
                firstNonNeg=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        int positive =n-firstpos;
        int negative=firstNonNeg;

        return max(positive,negative);
    }
};
