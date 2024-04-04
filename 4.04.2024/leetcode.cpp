class Solution {
public:
    int maxDepth(string s) {
        stack <char> st;
        int d = 0;
        for(auto it: s)
        {
            if(it == '(')
            st.push(it);
            else if(it == ')')
            st.pop();

             d = max(d,(int)st.size());
        }

        return d;
        

    }
};