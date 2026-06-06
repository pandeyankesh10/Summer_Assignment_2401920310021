class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int n = mat.size();
        int s = 0;

        for (int i = 0; i < n; i++)
        {
            s = s + mat[i][i];
            s = s + mat[i][n - i - 1];

            if (n - i - 1 == i)
            {
                s = s - mat[i][n - i - 1];
            }
        }

        return s;
    }
};