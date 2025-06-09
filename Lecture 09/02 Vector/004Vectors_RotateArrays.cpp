class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        reverse(nums.begin(), nums.end()); // reverse nums[0..n-1]
        reverse(nums.begin(), nums.begin() + k); // reverse nums[0..k-1]
        reverse(nums.begin() + k, nums.end()); // reverse nums[k...n-1]
    }
};