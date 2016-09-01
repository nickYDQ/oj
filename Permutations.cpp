class Solution {
public:
    void helper(vector<vector<int>>& result,vector<int>& path,int s,int n){
    	if(s==n)
    	{
    	    result.push_back(path);
    		return ;
    	}
    	for(int i = s;i<n;i++)
    	{
    		swap(path[s],path[i]);
    		helper(result,path,s+1,n);
    		swap(path[s],path[i]);
    	}
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
    	if(nums.empty())
    	{
    		return result;
    	}
    	helper(result,nums,0,nums.size());
    	return result;
        
    }
};