class Solution
{
    public:

        int solve(string columnTitle, long long int power)
        {
            if (columnTitle.length() == 0)
            {
                return 0;
            }

            long long int smalloutput = solve(columnTitle.substr(1), power *26);

            int digit = columnTitle[0] - 64;

            long long int ans = (digit) *power + smalloutput;

            return ans;
        }
    int titleToNumber(string columnTitle)
    {
        reverse(columnTitle.begin(), columnTitle.end());

        return solve(columnTitle, 1);
    }
};