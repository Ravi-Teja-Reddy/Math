class Solution
{
    public:

        /*
    1. We notice that length and width of the rectangle must be divisors of area
    2. We are going to find the width of the rectangle first cause width <= length
    3. We notice that width of the rectangle must be contained in[1, sqrt(area)] cause if width >          sqrt(area), then width will be greater than length  
    4. The difference of length and width must be minimized -> we pick the biggest divisor in[1,             sqrt(area)], which is also the width of the rectangle
    */

        int solve(int area, int start, int end)
        {

            if (start == end)
            {
                return start;
            }

            if (area % end == 0)
                return end;

            else
                return solve(area, start, end - 1);
        }

    vector<int> constructRectangle(int area)
    {

        int end = (int) sqrt(area);

        int start = 1;

        int width = solve(area, start, end);

        int length = area / width;

        vector<int> out;

        out.push_back(length);

        out.push_back(width);

        return out;
    }
};