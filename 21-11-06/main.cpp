#include <string>
#include <vector>
#include <unordered_map>
#include <math.h>
#include <stdio.h>

using namespace std;


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n;
        int sum;
        int s;
        s = 0;
        n = nums.size();
        sum = (1 + n) * n / 2;
        for (auto i : nums) {
            s += i;
        }
        return sum-s;
    }
};



int main()
{
    Solution s;
    s.missingNumber({1,2,3,4,7});
    return 0;
}
