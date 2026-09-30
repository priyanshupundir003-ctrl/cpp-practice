class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow=head;
        ListNode* fast=head;

        // fast ko nth aage le jao
        for(int i=1;i<=n;i++){
            fast=fast->next;
        } 

        // dono ko sath move karo
        while(fast != NULL && fast->next != NULL){
            slow=slow->next;
            fast=fast->next;
        }
        // nth node ko delete karo
       if(fast == NULL){
       return head->next;
       }
       slow->next=slow->next->next;
   
    return head;
    }
};
