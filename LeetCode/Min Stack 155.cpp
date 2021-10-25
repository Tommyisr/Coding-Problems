
class MinStack {
    vector<pair<int,int>> array;
    
public:
    MinStack() {}
    
   
    

    void push(int val) {
        if(this->array.size()==0 || val < this->array.back().second){
            this->array.push_back({val,val});
        }
        else this->array.push_back({val, this->array.back().second});
            
        
    }
    
    void pop() {
        this->array.pop_back();
    }
    
    int top() {
        return this->array.back().first;
    }
    
    int getMin() {
                return this->array.back().second;

    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
