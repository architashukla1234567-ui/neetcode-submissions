class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        sort(strs.begin(),strs.end());
        string start = strs[0];
        string end = strs[strs.size()-1];
        for(int i=0;i<start.size();i++){
            if(start[i] != end[i]){
                break;
            }
            result += start[i];
        }
        return result;
    }
};