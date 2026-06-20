class Solution
{
public:
    string reverseWords(string s)
    {
        int strt = 0;
        int n = s.size();

        for (int i = 0; i <= n; i++)
        {
            if (i == n || s[i] == ' ')
            {
                reverse(s.begin() + strt, s.begin() + i);
                strt = i + 1;
            }
        }

        return s;
    }
};                                      