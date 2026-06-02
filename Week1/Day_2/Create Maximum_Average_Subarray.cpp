class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        int sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum = sum + nums[i];
        }

        int maximum_sum = sum;

        int left = 0;
        int right = k;

        while (right < nums.size())
        {
            sum = sum - nums[left];
            left++;

            sum = sum + nums[right];
            right++;

            maximum_sum = max(maximum_sum, sum);
        }

        return (double)maximum_sum / k;
    }
};