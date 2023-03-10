class Solution {
    vector<int> ll;
    int sz;
public:
    Solution(ListNode* head) {
        while (head) {
            ll.push_back(head->val);
            head= head->next;
        }
        sz= ll.size();
    }
    
    int getRandom() {
        int r= rand()%sz;
        return ll[r];
    }
};
