class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1); //Creates an array of size n, filled with 1s. This will hold our results.

        int left = 1;
        for (int i = 0; i < n; i++) {
            ans[i] = left;
            left *= nums[i];
        }

        int right = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= right;
            right *= nums[i];
        }

        return ans;
    }
};