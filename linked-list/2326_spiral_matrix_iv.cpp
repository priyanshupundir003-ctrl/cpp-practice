class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
         vector<vector<int>> arr(m,vector<int>(n,-1));
         int minr=0, maxr=m-1;
         int minc=0, maxc=n-1;

         ListNode* temp = head;

         while(temp != NULL && minr <= maxr && minc <= maxc){
            // left -> right
            for(int j=minc;j<=maxc && temp != NULL;j++){
                arr[minr][j] = temp->val;
                temp = temp->next;
            }
            minr++;

            // top -> bottom
           
            for(int i=minr;i<=maxr && temp != NULL;i++){
                arr[i][maxc] = temp->val;
                temp = temp->next;
            }
            maxc--;

            // right -> left

            for(int j=maxc;j>=minc && temp != NULL;j--){
                arr[maxr][j] = temp->val;
                temp = temp->next;
            }
            maxr--;

            // bottom -> top
            for(int i=maxr;i>=minr && temp != NULL;i--){
                arr[i][minc] = temp->val;
                temp = temp->next;
            }
            minc++;
         }
         return arr;
    }
};
