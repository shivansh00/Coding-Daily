struct PageNode {
    string url;
    PageNode* next;
    PageNode* prev;
    PageNode(string url) {
        this->url= url;
        next= nullptr;
        prev= nullptr;
    }
};

class BrowserHistory {
    PageNode *head;
    PageNode *curr;
public:
    BrowserHistory(string homepage) {
        head= new PageNode(homepage);
        curr= head;
    }
    
    void visit(string url) {
        curr->next= new PageNode(url);
        curr->next->prev= curr;
        curr= curr->next;
    }
    
    string back(int steps) {
        while (curr and curr->prev and steps--)
            curr= curr->prev;
        return curr->url;
    }
    
    string forward(int steps) {
        while (curr and curr->next and steps--)
            curr= curr->next;
        return curr->url;
    }
};
