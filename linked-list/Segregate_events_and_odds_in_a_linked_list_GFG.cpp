class Solution {
  public:
    Node* divide(Node* head){
        if(head == NULL)
        return head;
       
                Node* dummy1=new Node(-1);
                Node* dummy2=new Node(-1);
                
                Node* temp= head;
                Node* temp1 = dummy1;
                Node* temp2 = dummy2;
                while(temp != NULL){
                    if(temp->data % 2 == 0){
                       temp1->next=temp;
                       temp1 = temp;
                    }
                    else{
                      temp2->next=temp;
                      temp2 = temp;
                    }
                    temp = temp->next;
                }
               temp1->next = dummy2->next;
                       temp2->next = NULL;

                return dummy1->next;
    }
};
