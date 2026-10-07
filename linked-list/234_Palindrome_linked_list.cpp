class Solution {
public:
    bool isPalindrome(ListNode* head) {
        // step 1:  find middle
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast != NULL && fast->next != NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        //step 2: reverse second half
        ListNode* prev= NULL;
        ListNode* curr=slow;

        while(curr != NULL){
            ListNode* fwd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fwd;
        }
        // step 3: compare
        ListNode* left=head;
        ListNode* right=prev;

        while(right != NULL){
            if(left->val != right->val)
            return false;

            left=left->next;
            right=right->next;
        }
        return true;
    }
};
