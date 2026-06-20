class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        int n = s1.size();
        int m = s2.size();

        if (n > m)
            return false;

        vector<int> count1(26, 0);

        for (char ch : s1)
            count1[ch - 'a']++;

        for (int i = 0; i <= m - n; i++)
        {
            vector<int> count2(26, 0);

            for (int j = i; j < i + n; j++)
            {
                count2[s2[j] - 'a']++;
            }

            if (count1 == count2)
                return true;
        }

        return false;
    }
};