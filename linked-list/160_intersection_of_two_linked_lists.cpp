class Solution {
public:
int length(ListNode* head){
 int len =0;
        ListNode* temp=head;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        return len;
    }
    ListNode *getIntersectionNode(ListNode* head1, ListNode* head2) {
       int len1=length(head1);
       int len2=length(head2);

       ListNode* temp1=head1;
       ListNode* temp2=head2;
       if(len1 > len2){
        for(int i=1;i<=len1-len2;i++){
            temp1=temp1->next;
        }
       }
        else{
            for(int i=1;i<=len2-len1;i++){
                temp2=temp2->next;
            }
        }
        while(temp1 != temp2){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return temp1;
       }
};
