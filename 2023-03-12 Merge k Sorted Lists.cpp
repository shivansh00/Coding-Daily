/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    ListNode* merge(ListNode *a, ListNode *b) {
        ListNode *head= new ListNode();
        ListNode *ans= head;
        while (a and b) {
            if (a->val < b->val) {
                head->next= a;
                a= a->next;
            }
            else {
                head->next= b;
                b= b->next;
            }
            head= head->next;
        }
        if (a)  head->next= a;
        else    head->next= b;
        return  ans->next;
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty())  return nullptr;
        ListNode *head= new ListNode();
        ListNode *node= head;
        const int n= lists.size();
        for (int interval= 1; interval < n; interval*= 2)
            for (int i= 0; i +interval < n; i+= interval*2)
                lists[i]= merge(lists[i], lists[i+interval]);
        return lists[0];
    }
};
