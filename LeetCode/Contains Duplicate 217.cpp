class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        map<int,int> a;
        
        for(int i=0; i<nums.size(); i++){
            map<int,int>::iterator it;
            it = a.find(nums[i]);
            if (it != a.end()){
                return true;
            }
            else a[nums[i]]=0;
   
            
            
        }
        
    return false;
    }
};
