class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mpp;
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        for(int j=0;j<t.size();j++){
            mp[t[j]]++;
        }
        if(mpp == mp){
            return true;
        }
        return false;
    }
};
