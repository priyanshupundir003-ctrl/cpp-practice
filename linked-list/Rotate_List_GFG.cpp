class Solution {
  public:
    Node* rotate(Node* head, int k) {
       if(head == NULL || head->next == NULL)
       return head;
       
       // find length and tail
       int n=1;
       Node* tail=head;
       
       while(tail->next != NULL){
           tail=tail->next;
           n++;
       }
       k=k%n;
       
       if(k==0)
       return head;
       
       // make linked list circular
       tail->next=head;
       
       // find new tail
       Node* temp=head;
       for(int i=1;i<k;i++){
           temp=temp->next;
       }
       // new heAD
       Node* newHead=temp->next;
       
       // break the circle
       temp->next=NULL;
       
       return newHead;
    }
};
