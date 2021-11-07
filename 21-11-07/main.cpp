#include <string>
#include <vector>
#include <unordered_map>
#include <math.h>
#include <stdio.h>

using namespace std;


class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int mina = m, minb = n;
        for (const auto& op: ops) {
            mina = min(mina, op[0]);
            minb = min(minb, op[1]);
        }
        return mina * minb;
    }
};



int main()
{
    Solution s;
    s.maxCount(1,2, {{1,2,3,4,7}});
    return 0;
}
