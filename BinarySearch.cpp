//[Search Insert Position] (https://leetcode.com/problems/search-insert-position/)
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int r = nums.size()-1;
        int l = 0;
        if(nums.empty())
        {
            return 0;
        }
        while(l<=r)
        {
            int mid =(l+r)/2;
            if(target==nums[mid])
            {
                return mid;
            }
            else if(target<nums[mid])
            {
                r = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        return l;
    }
};

//BinarySearch
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int r = nums.size()-1;
        int l = 0;
        if(nums.empty())
        {
            return 0;
        }
        while(l<=r)
        {
            int mid =(l+r)/2;
            if(target==nums[mid])
            {
                return mid;
            }
            else if(target<nums[mid])
            {
                r = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        return -1;
    }
};
