class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int> temp(m,0);
        for(int i = 0; i<m; i++){
            
            temp[i] = nums1[i];
        }
        
        int l1 = 0;
        int l2 = 0;
        int i = 0;

        while(l1<m && l2<n){
            if(temp[l1] <= nums2[l2]){
                nums1[i] = temp[l1++];
            }
            else nums1[i] = nums2[l2++];
            i++;
        }
        
        while(l1<m) nums1[i++] = temp[l1++];
        while(l2<n) nums1[i++] = nums2[l2++];

        
    }
};
