class Solution {
public:
    /*
        Time: O(n)
        Space: O(1)
    */
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size()-1;
        while(left<right) {
            int sum = numbers[left] + numbers[right];
            if(sum == target) return {left+1, right+1};
            if(sum < target) left++;
            else right--;
        }
        return {-1, -1};
    }
};