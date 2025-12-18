// leetcode 26 : remove duplicates from sorted array
// day 2
// approach : two pointer
// time complexity : O(n)
// space complexity : (1)
class solution {
public:
int 
removeDuplicates(vector<int>&nums) {
  int j = 1;
for(int i = 1; i < nums.size(); i++){
if(nums[i] != nums[i - 1]){
nums[j] = nums[i];
j++;
}
}
return j;
}
};
