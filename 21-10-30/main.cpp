#include <set>
#include <vector>
#include <stdio.h>

using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        set<int> s;
        vector<int> v;
        s.clear();
        v.clear();
        for (auto n: nums) {
            auto iter = s.find(n);
            if (iter != s.end()) {
                s.erase(iter);
            } else {
                s.insert(n);
            }
        }
        for (auto n:s) {
            v.push_back(n);
        }
        return v;
    }
};

int main()
{
    Solution s;
    s.singleNumber({1,2,3,4});
    return 0;
}
