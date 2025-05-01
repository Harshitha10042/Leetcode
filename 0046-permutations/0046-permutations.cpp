class Solution {
public:
    void getperms(vector<int>& nums, int idx, vector<vector<int>>& ans) {
        if (idx == nums.size()) {
            ans.push_back(nums);  // Store the current permutation
            return;
        }
        for (int i = idx; i < nums.size(); i++) {
            swap(nums[idx], nums[i]);           // Choose
            getperms(nums, idx + 1, ans);        // Explore
            swap(nums[idx], nums[i]);           // Unchoose (backtrack)
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        getperms(nums, 0, ans);
        return ans;
    }
};
