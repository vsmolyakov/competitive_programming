class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> result;
        permute_recursive(nums, 0, result);
        return result;        
    }
    
private:
    
    void permute_recursive(vector<int>& nums, int start, vector<vector<int>>& result)
    {
        //base case
        if (start >= nums.size())
        {
            result.push_back(nums); //one permutation sequence
            return;
        }
        
        //recursion
        for (int i = start; i < nums.size(); ++i)
        {
            swap(nums[start], nums[i]); //swap starting number with i-th index
            permute_recursive(nums, start+1, result); //recurse on a smaller array
            swap(nums[start], nums[i]); //put the starting number back
        }
    }
        
};