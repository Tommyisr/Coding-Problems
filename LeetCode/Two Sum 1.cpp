class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> res;
        map<int,int> a;
        map<int,int>::iterator it;
        for(int i = 0; i<nums.size(); i++){
            
            it = a.find(target-nums[i]);
            if(it != a.end()){
            res.push_back(a[target-nums[i]]);
                res.push_back(i);
            }
            else a[nums[i]] = i;
            
        }
        
            return res;
    }
};
