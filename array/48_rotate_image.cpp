class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        int m=arr.size(),n=arr[0].size();
       
       // transpose
        for(int i=0;i<m;i++){
            for(int j=i+1;j<n;j++){
               swap(arr[i][j],arr[j][i]);
            }
        }
        // reverse each row
        for(int i=0;i<m;i++){
            reverse(arr[i].begin(),arr[i].end());
        }
    }
};
