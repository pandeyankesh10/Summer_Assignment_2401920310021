class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        int n = s.size();
        int m = p.size();

        vector<int> ans;

        if (m > n)
            return ans;

        vector<int> count1(26, 0);
        vector<int> count2(26, 0);

        for (int i = 0; i < m; i++)
        {
            count1[p[i] - 'a']++;
            count2[s[i] - 'a']++;
        }

        if (count1 == count2)
        {
            ans.push_back(0);
        }

        for (int i = m; i < n; i++)
        {
            count2[s[i] - 'a']++;
            count2[s[i - m] - 'a']--;

            if (count1 == count2)
            {
                ans.push_back(i - m + 1);
            }
        }

        return ans;
    }
};