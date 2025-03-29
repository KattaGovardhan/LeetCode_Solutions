/*
 * @lc app=leetcode id=3169 lang=cpp
 *
 * [3169] Count Days Without Meetings
 */

// @lc code=start
class Solution
{
public:
    int countDays(int days, vector<vector<int>> &meetings)
    {
        if (meetings.empty())
            return days;

        sort(meetings.begin(), meetings.end());

        int count = 0;
        int last_end = 0;

        for (const auto &meeting : meetings)
        {
            int start = meeting[0];
            int end = meeting[1];

            if (start > last_end)
            {
                count += start - last_end - 1;
            }

            last_end = max(last_end, end);
        }

        count += days - last_end;

        return count;
    }
};
// @lc code=end
