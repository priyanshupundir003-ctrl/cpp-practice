class Solution {
public:
    int pairSum(ListNode* head) {
       // find middle
       ListNode* slow=head;
       ListNode* fast=head;

       while(fast != NULL && fast->next != NULL){
        slow=slow->next;
        fast=fast->next->next;
       }
       // reverse second half
       ListNode* prev=NULL;
       ListNode* curr=slow;

       while(curr != NULL){
        ListNode* fwd=curr->next;
        curr->next=prev;
        prev=curr;
        curr=fwd;
       }
       // find max twin sum
       int maxi=0;
       ListNode* left=head;
       ListNode* right=prev;

       while(right != NULL){
        int sum= left->val + right->val;
        maxi = max(maxi,sum);

        left=left->next;
        right=right->next;
       }
       return maxi;
    }
};
