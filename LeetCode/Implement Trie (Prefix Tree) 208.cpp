#define ABSIZE 26
using namespace std;
    
class Trie {
    private:
    Trie* array[ABSIZE];
    bool isLeaf;
    
public:
    
    
    
    Trie() {
        for(int i = 0; i<ABSIZE; i++) this->array[i] = NULL;
        this->isLeaf = false;
    }
    
    
    void insert(string word) {
        
        Trie* root = this;
        
        for(int i = 0; i<word.length();i++){
            int index = word[i]-'a';
            
            if(root->array[index] == NULL){
                root->array[index] = new Trie();
            }
            
            root = root->array[index];
        }
        root->isLeaf = true;
        
    }
    
    bool search(string word) {
        Trie* root = this;
        for(int i = 0; i<word.length(); i++){
            int index = word[i]-'a';
            if(root->array[index] == NULL) return false;
            else {
                root = root->array[index];
            }
        }
        if(root->isLeaf) return true;
        else return false;
    }
    
    bool startsWith(string prefix) {
        Trie* root = this;
        for(int i = 0; i<prefix.length(); i++){
            int index = prefix[i]-'a';
            if(root->array[index] == NULL) return false;
            else {
                root = root->array[index];
            }
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







