class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        // Count frequency
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        // Store number and frequency
        vector<pair<int,int>> v;

        for(auto it : mp) {
            v.push_back({it.second, it.first});
        }

        // Sort by frequency (descending)
        sort(v.rbegin(), v.rend());

        // Get top k elements
        vector<int> ans;

        for(int i = 0; i < k; i++) {
            ans.push_back(v[i].second);
        }

        return ans;
    }
};