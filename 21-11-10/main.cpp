#include <string>
#include <vector>
#include <unordered_map>
#include <set>
#include <iostream>

using namespace std;

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int res = 0;
        int t_last = timeSeries[0];
        for (auto t : timeSeries) {
            if (t - t_last > duration) {
                res += duration;
            } else {
                res += (t - t_last);
            }
            t_last = t;
        }

        return res+duration;
    }
};

int main()
{
    Solution s;
    s.findPoisonedDuration({1,2,3}, 2);
    return 0;
}
