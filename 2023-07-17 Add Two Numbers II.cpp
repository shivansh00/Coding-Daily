class Solution {
    stack<int> s, t;
    ListNode* node, *head;
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        while (l1) {
            s.push(l1->val);
            l1= l1->next;
        }
        while (l2) {
            t.push(l2->val);
            l2= l2->next;
        }
        int sum= s.top() + t.top();
        s.pop();
        t.pop();
        node= head= new ListNode(sum%10);
        sum/= 10;
        while (!s.empty() or !t.empty()) {
            if (!s.empty()) {
                sum+= s.top();
                s.pop();
            }
            if (!t.empty()) {
                sum+= t.top();
                t.pop();
            }
            head= new ListNode(sum%10, node);
            sum/= 10;
            node= head;
        }
        if (sum)    head= new ListNode(1, node);
        return head;
    }
};
