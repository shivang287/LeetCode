class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL)
            return NULL;

        unordered_map<Node*, Node*> m;

        Node* newhead = new Node(head->val);
        m[head] = newhead;

        Node* oldtemp = head->next;
        Node* newtemp = newhead;

        // Create copied nodes and store mapping
        while (oldtemp != NULL) {
            Node* copynode = new Node(oldtemp->val);
            newtemp->next = copynode;

            m[oldtemp] = copynode;   // Missing line

            oldtemp = oldtemp->next;
            newtemp = newtemp->next;
        }

        // Assign random pointers
        oldtemp = head;
        newtemp = newhead;

        while (oldtemp != NULL) {
            newtemp->random = m[oldtemp->random];
            oldtemp = oldtemp->next;
            newtemp = newtemp->next;
        }

        return newhead;
    }
};