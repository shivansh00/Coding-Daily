class Solution {
    ListNode *findNode(ListNode *head, ListNode* node) {
        while (head != node) {
            head= head->next;
            node= node->next;
        }
        return node;
    }
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow= head, *fast= head;
        while (fast and fast->next) {
            slow= slow->next;
            fast= fast->next->next;
            if (slow == fast)
                return findNode(head, slow);
        }
        return nullptr;
    }
};
