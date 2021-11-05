class Solution {
public:
    vector<vector<int>> res;
    
    void rec(vector<int>& nums, vector<int>& temp, int i, int size){
        
        if(i == size) {
            res.push_back(nums);
            return;
        }
        
        for(int index = i; index < size; index++){
            printf("%d ", nums[index]);
            swap(nums[index],nums[i]);
            rec(nums,temp, i+1, size);
            
            swap(nums[index],nums[i]);

        }
        
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        
        rec(nums,temp,0,nums.size());
        
        return res;
    }
};
