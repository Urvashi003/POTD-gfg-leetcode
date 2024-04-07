//1st approach

#include <stack>
#include <string>

class Solution {
public:
    bool checkValidString(string s) {
        int n = s.size();
        stack<int> open_brackets, asterisks;
        
        // Iterate through the string
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                open_brackets.push(i);
            } else if (s[i] == '*') {
                asterisks.push(i);
            } else { // s[i] == ')'
                if (!open_brackets.empty()) {
                    open_brackets.pop(); // Match '('
                } else if (!asterisks.empty()) {
                    asterisks.pop(); // Treat '*' as '('
                } else {
                    return false; // No matching '(' or '*' found
                }
            }
        }
        
        // Check if remaining open brackets can be matched with asterisks
        while (!open_brackets.empty() && !asterisks.empty()) {
            if (open_brackets.top() < asterisks.top()) {
                open_brackets.pop();
                asterisks.pop();
            } else {
                break; // No more valid matches
            }
        }
        
        // If there are no remaining unmatched open brackets
        return open_brackets.empty();
    }
};
