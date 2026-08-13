class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n));
        int top=0;
        int bottom=n-1;
        int left=0;
        int right=n-1;
        
        int num=1;

        while(top <= bottom && left<=right){

            // left to right
            for(int j=left;j<=right;j++){
                ans[top][j]=num;
                num++;
            }
            top++;

            // top to bottom
            for(int i=top;i<=bottom;i++){
                ans[i][right]=num;
                num++;
            }
            right--;

            // right to left
            if(top <= bottom){
                for(int j=right;j>=left;j--){
                    ans[bottom][j]=num;
                    num++;
                }
                bottom--;
            }
            // bottom to top
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    ans[i][left]=num;
                    num++;
                }
                left++;
            }
        }
        return ans;
    }
};
