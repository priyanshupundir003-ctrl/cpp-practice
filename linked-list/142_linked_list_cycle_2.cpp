class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
       
       // step 1: cycle hai ya nahi
        while(fast != NULL && fast->next != NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(slow == fast){

            // cycle ka starting node find karo
                slow=head;
                while(slow != fast){
                    slow=slow->next;
                    fast=fast->next;
                }
                return slow;
            }

        }
        return NULL;
    }
};
