class Solution {
public:
    Node* partition(Node* head, int x) {

        Node* lessDummy = new Node(-1);
        Node* equalDummy = new Node(-1);
        Node* greaterDummy = new Node(-1);

        Node* less = lessDummy;
        Node* equal = equalDummy;
        Node* greater = greaterDummy;

        Node* temp = head;

        while(temp != NULL) {

            if(temp->data < x) {
                less->next = temp;
                less = less->next;
            }
            else if(temp->data == x) {
                equal->next = temp;
                equal = equal->next;
            }
            else {
                greater->next = temp;
                greater = greater->next;
            }

            temp = temp->next;
        }

        // Last list ko terminate karo
        greater->next = NULL;

        // less -> equal
        less->next = equalDummy->next;

        // equal -> greater
        equal->next = greaterDummy->next;

        return lessDummy->next;
    }
};
