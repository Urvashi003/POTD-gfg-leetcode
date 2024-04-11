class Solution {
public:
    string removeKdigits(string num, int k) {
       stack<char> qt;
        // Ensure that we always leave at least one digit
        for(char em : num) {
            while(k > 0 && !qt.empty() && qt.top() > em) {
                qt.pop();
                k--;
            }
            qt.push(em);e
        }

        // If k is still greater than 0, remove the remaining digits from the end
        while(k > 0 && !qt.empty()) {
            qt.pop();
            k--;
        }

        string ans;
        while(!qt.empty()) {
            ans += qt.top();
            qt.pop();
        }

        // Remove leading zeros
        while(!ans.empty() && ans.back() == '0') {
            ans.pop_back();
        }

        // If all characters are removed, return "0"
        if(ans.empty()) {
            return "0";
        }

        // Reverse the string to get the correct order
        reverse(ans.begin(), ans.end());
        return ans;
    }
};