class Solution {
public:
    int evalRPN(vector<string>& s) {
        stack<int> st;
        int i = 0;
        while(i < s.size())
        {
            if(s[i] != "+" && s[i] != "-" && s[i] != "*" && s[i] != "/" )
                st.push(stoi(s[i]));
            else
            {
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                int result;
                if(s[i] == "+")
                    result = y + x;
                else if(s[i] == "-")
                    result = y - x;
                else if(s[i] == "*")
                    result = y * x;
                else
                    result = y / x;
                st.push(result);
            }
            i++;
        }
        return st.top();
    }
};