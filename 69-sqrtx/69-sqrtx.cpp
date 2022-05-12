class Solution
{
    public:

        int solve(int x, int start, int end)
        {

            if (start > end)
                return start - 1;

            long long int mid = start + (end - start) / 2;

            if (mid *mid == x)
                return mid;

            else if (mid * mid > x)
                return solve(x, start, mid - 1);

            else
                return solve(x, mid + 1, end);
        }

    int mySqrt(int x)
    {

        if (x == 0 || x == 1)
            return x;

        return solve(x, 0, x - 1);
    }
};