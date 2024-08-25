class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int b = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        if(a == nums.size() || nums[a] != target) a = -1;
        if(b>0 && nums[b-1] != target) b = 0;
        return {a, b-1};
    }
};