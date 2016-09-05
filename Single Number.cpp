class Solution {
public
    int singleNumber(vectorint& nums) {
        if(nums.size()=0)
        {
            return 0;
        }
        int x = nums[0];
        for(int i = 1;inums.size();i++)
        {
            x = x^nums[i];
            
        }
        return x;
        
    }
};