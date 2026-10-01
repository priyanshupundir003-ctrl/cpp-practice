class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* slow=head;
        ListNode* fast=head;

        // kth element tak fast
        for(int i=1;i<k;i++){
            fast=fast->next;
        }
        ListNode* first=fast;
        
        // kth element last se
        while(fast->next != NULL){
            fast=fast->next;
            slow=slow->next;
        }
        ListNode* second=slow;
         
         // swap values
        swap(first->val,second->val);

        return head;
    }
};
