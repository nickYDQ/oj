//Maximum Subarray
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int l = nums.size();
        vector<int> result(l);
        result[0]=nums[0];
        int final_result=nums[0];
        for(int i = 1;i<l;i++)
        {
            result[i] = max(result[i-1]+nums[i],nums[i]);
            if(final_result<result[i])
            {
                final_result = result[i];
            }
        }
        return final_result;
    }
};