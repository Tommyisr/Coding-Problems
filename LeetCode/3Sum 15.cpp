class Solution {
public:
    
    
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        set<vector<int>> ans;
        vector<vector<int>> res;

        if(nums.size() < 3) return res;
        
        sort(nums.begin(),nums.end());
        
        for(int i = 0; i<nums.size()-1; i++){
            
            int a = nums[i];
            
            int left = i+1;
            int right = nums.size()-1;
            
            while(right < nums.size() && left < right){
                
                if(-a == nums[left]+nums[right]){
                    vector<int> temp;
                    ans.insert({a,nums[left],nums[right]});
                    left++;
                    right--;
                }
                else if(nums[left]+nums[right] > -a) right--;
                else left++;
            }
        }
        
        for(auto it = ans.begin(); it != ans.end(); it++){
            res.push_back(*it);
        }
        return res;
    }
};
