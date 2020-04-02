class TrieNode{
private:
    int outFlow;
    bool isEndOfWord;
    TrieNode *childNode[26], *parent;
public:
    TrieNode(TrieNode* p){
        for(int i = 0; i < 26; i++) { outFlow = 0; childNode[i] = NULL;}
        parent = p;
        isEndOfWord = false;
    }
    int getOutFlow(){ return outFlow; }
    bool getIsEndOfWord(){ return isEndOfWord; }
    TrieNode* getParent() { return parent; }
    TrieNode* getChildLocation(int pos) { return childNode[pos]; }

    void setChild(TrieNode *node, int pos){ childNode[pos] = node; }
    void setParent(TrieNode *p){ parent = p; }
    void updateOutFlow(int value){ outFlow += value; }
    void setIsEndOfWord(bool value){ isEndOfWord = value; }
};
class Trie{
private:
    TrieNode *root;
    bool checkString(std::string s){
        TrieNode *node = root;
        for(auto i: s){
            if(node->getChildLocation(i - 97) != NULL) node = node->getChildLocation(i - 97);
            else return false;
        }
        return node->getIsEndOfWord();
    }
public:
    Trie(){ root = new TrieNode(NULL); }

    std::pair<int, int> searchPattern(std::string s){
        TrieNode *node = root;
        int leafs = 0;
        for(auto i: s){
            if(node->getChildLocation(i - 97) != NULL) {
                node = node->getChildLocation(i - 97);
                if(node->getIsEndOfWord()) leafs += 1;
            }
            else return std::make_pair(0, leafs);
        }
        return std::make_pair(node->getOutFlow(), leafs);
    }
    void insertString(std::string s){
        if(checkString(s)) return;
        TrieNode *node = root;
        for(auto i: s){
            if(node->getChildLocation(i - 97) == NULL) node->setChild(new TrieNode(node), i - 97);
            node = node->getChildLocation(i - 97);
            node->updateOutFlow(1);
        }
        node->setIsEndOfWord(true);
    }
    void deleteString(std::string s){
        TrieNode *node = root;
        for(auto i: s) if(node->getChildLocation(i - 97) != NULL) node = node->getChildLocation(i - 97);
        if(node->getIsEndOfWord()) node->setIsEndOfWord(false);
        else return;
        for(int i = s.length() - 1; i >= 0; i--){
            TrieNode *parent = node->getParent();
            if(node->getOutFlow() > 1) node->updateOutFlow(-1);
            else { parent->setChild(NULL, s[i] - 97);node->setParent(NULL); delete node; }
            node = parent;
        }
    }
};