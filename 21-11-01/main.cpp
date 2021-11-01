#include <string>
#include <vector>
#include <set>
#include <math.h>
#include <stdio.h>

using namespace std;


class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int res;
        set<int> s;
        for (auto c : candyType) {
            s.insert(c);
        }
        res = candyType.size() / 2;
        if (s.size() < res) {
            res = s.size();
        }
        return res;
    }
};


int main()
{
    Solution s;
    s.distributeCandies({1,2,2,3});
    return 0;
}