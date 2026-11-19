class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_map<char,int> mpp;
       int left = 0;
       int right = 0;
       int maxLength = 0;
       while(right < s.size()){
          mpp[s[right]]++;
          while(mpp[s[right]] > 1){
            mpp[s[left]]--;
            left++;
          }
          int currentLen = right-left+1;
          maxLength = max(maxLength,currentLen);
          right++;
       }
       return maxLength;
    }
};
