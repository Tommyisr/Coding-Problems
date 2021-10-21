class RandomizedSet {
    unordered_map<int,int> hash;
    vector<int> v;
public:
    RandomizedSet() {
    
    }
    
    bool insert(int val) {
        auto it = this->hash.find(val);
        if(it != this->hash.end()) return false;
        else {
            this->hash[val] = this->v.size();
            this->v.push_back(val);
            return true;
        }
        
    }
    
    bool remove(int val) {
        auto it = this->hash.find(val);
        if(it == this->hash.end()) return false;    
        
            int index = this->hash[val];
            this->hash.erase(val);
        
            if(index < this->v.size()-1) {
                this->v[index] = this->v[this->v.size()-1];
                this->hash[this->v[this->v.size() - 1]] = index;
            }
            
            v.pop_back();
            
        
        return true;
    }
    
    

    
    int getRandom() {
        return v[rand() % v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
