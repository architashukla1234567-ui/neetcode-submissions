class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.size(); i++) {

            // If it's an opening bracket, push it
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }
            else {
                // If stack is empty, there's no matching opening bracket
                if (st.empty()) {
                    return false;
                }

                // Check if the brackets match
                if ((s[i] == ')' && st.top() == '(') ||
                    (s[i] == '}' && st.top() == '{') ||
                    (s[i] == ']' && st.top() == '[')) {

                    st.pop();
                }
                else {
                    return false;
                }
            }
        }

        // If stack is empty, all brackets matched
        return st.empty();
    }
};