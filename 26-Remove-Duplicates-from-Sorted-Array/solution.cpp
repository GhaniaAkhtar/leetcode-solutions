class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        for (int i=1;i<nums.size();i++){
            if(nums[k] != nums[i]){
                k++;
                nums[k] = nums[i];
            }
        
        }
        return k+1;// k hamesha last unique element ka index hota hai (0-based), isliye count nikalne ke liye +1 kiya e.g resulting array = [1,2,3,4] at value 4 k==3, but output is 4, so we've returned k+!
    }
};
