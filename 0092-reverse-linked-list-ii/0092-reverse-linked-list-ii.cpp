
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode dummy(0, head);
        ListNode* prev = &dummy;

        // Reach the node just before position left
        for (int i = 1; i < left; i++) {
            prev = prev->next;
        }

        // First node of the section being reversed
        ListNode* curr = prev->next;

        // Reverse the section by moving nodes to the front
        for (int i = 0; i < right - left; i++) {
            ListNode* temp = curr->next;

            curr->next = temp->next;
            temp->next = prev->next;
            prev->next = temp;
        }

        return dummy.next;
    }
};
