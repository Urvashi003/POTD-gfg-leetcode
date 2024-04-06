#include <stack>
#include <string>

class Solution {
public:
    std::string minRemoveToMakeValid(std::string s) {
        std::stack<int> st;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') {
                st.push(i); // Push the index of '(' onto the stack
            } else if (s[i] == ')') {
                if (!st.empty()) {
                    st.pop(); // Remove matching '(' from the stack
                } else {
                    s[i] = '*'; // Mark invalid ')' for removal
                }
            }
        }

        // Mark remaining unmatched '(' for removal
        while (!st.empty()) {
            s[st.top()] = '*';
            st.pop();
        }

        // Remove marked characters '*'
        std::string result;
        for (char c : s) {
            if (c != '*') {
                result += c;
            }
        }

        return result;
    }
};
