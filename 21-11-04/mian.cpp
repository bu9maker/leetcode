#include <string>
#include <vector>
#include <set>
#include <math.h>
#include <stdio.h>

class Solution {
public:
    bool isPerfectSquare(int num) {
        int half = num/2 + 2;
        for (int i = 1;i < half && i < 46341;++i) {
            if (i*i > num) {
                return false;
            } else if (i*i == num) {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution s;
    s.isPerfectSquare(666);
    return 0;
}