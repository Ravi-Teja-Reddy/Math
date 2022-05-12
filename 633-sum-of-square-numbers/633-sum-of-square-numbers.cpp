class Solution
{
    public:

        bool solve(long long int low, long long int high, int c)
        {
            if (low > high)
                return false;

            if (low *low + high *high == c)
                return true;

            else if (low *low + high * high > c)
            {
                return solve(low, high - 1, c);
            }
            else
                return solve(low + 1, high, c);
        }

    bool judgeSquareSum(int c)
    {

        return solve(0, sqrt(c), c);
    }
};