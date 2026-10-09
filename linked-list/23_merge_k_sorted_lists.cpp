class Solution {
public:
 ListNode* merge(ListNode* a, ListNode* b) {
        ListNode* dummy= new ListNode(-1);
        ListNode* i=a;
        ListNode* j=b;
        ListNode* k=dummy;
        while(i != NULL && j != NULL){
            if(i->val < j->val){
                k->next = i;
                i=i->next;
            }
            else{
                k->next=j;
                j=j->next;
            }
             k=k->next;
        }
        if(i == NULL) k->next = j;
        else k->next=i;
        return dummy->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       if(lists.size() == 0) return NULL;
        while(lists.size() > 1){
            ListNode* a=lists.back();
            lists.pop_back();
            ListNode* b=lists.back();
            lists.pop_back();
            ListNode* c = merge(a,b);
            lists.push_back(c);
        }
        return lists[0];
    }
};
