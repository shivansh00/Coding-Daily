class TrieNode {
  public:
    bool isComplete;
    vector<TrieNode*> children;
    TrieNode() {
        isComplete= false;
        children.resize(26, nullptr);
    }
};

class Trie {
    TrieNode *root;
public:
    Trie() {
        root= new TrieNode();
    }
    
    void insert(string word) {
        TrieNode *node= root;
        for (const char &c: word) {
            int idx= c-'a';
            if (!node->children[idx])
                node->children[idx]= new TrieNode();
            node= node->children[idx];
        }
        node->isComplete= true;
    }
    
    bool search(string word) {
        TrieNode *node= root;
        for (const char &c: word) {
            int idx= c- 'a';
            if (!node->children[idx])
                return false;
            node= node->children[idx];
        }
        return node->isComplete;
    }
    
    bool startsWith(string prefix) {
        TrieNode *node= root;
        for (const char &c: prefix) {
            int idx= c- 'a';
            if (!node->children[idx])
                return false;
            node= node->children[idx];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
