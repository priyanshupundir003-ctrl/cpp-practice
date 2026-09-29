class Solution {
public:
 ListNode* middleNode(ListNode* head){
    // part 1
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
 }

     // part 2
    // ListNode* middleNode(ListNode* head) {
    //     int len = 0;
    //     ListNode* temp = head;
    //     while(temp != NULL){
    //         temp = temp->next;
    //         len++;
    //     }
    //     temp = head;
    //     for(int i=1;i<=len/2;i++){
    //          temp = temp->next;
    //     }
    //     return temp;
    // }
};
