class Solution
{
    public:

        int reverse(int x)
        {

            bool sign = false;

            long temp;

            if (x < 0)
            {
                sign = 1;

                temp = -1 *(long) x;
            }
            else
            {
                temp = x;
            }

            long reverse = 0;

            while (temp > 0)
            {
                int digit = temp % 10;

                reverse = reverse *10 + digit;

                if (reverse > INT_MAX)
                    return 0;

                temp = temp / 10;
            }

            if (!sign)
                return reverse;
            else
                return -1 * reverse;
        }
};