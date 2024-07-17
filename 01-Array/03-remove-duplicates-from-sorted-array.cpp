class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        
        if (n == 0) {
            return 0;
        }
        
        int uniquePos = 0; 
        
        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[uniquePos]) {
                uniquePos++; 
                nums[uniquePos] = nums[i]; 
            }
        }
        
        return uniquePos + 1; 
    }
};
