class Solution
{
public:
    bool isValid(string s)
    {
        // creating a stack
        stack<char> st;

        for (char ch : s)
        {

            // PUSH starting bracket
            if (ch == '(' || ch == '{' || ch == '[')
            {
                st.push(ch);
            }
            else
            {

                if (st.empty()) // check if empty
                {
                    return false;
                }
                // check closing bracket
                if ((ch == ')' && st.top() == '(') ||
                    (ch == '}' && st.top() == '{') ||
                    (ch == ']' && st.top() == '['))
                {

                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }

        return st.empty();
    }
};