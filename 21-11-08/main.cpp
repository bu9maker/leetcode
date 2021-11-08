#include <string>
#include <vector>
#include <unordered_map>
#include <set>
#include <iostream>

using namespace std;


class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0;
        int cows = 0;
        unordered_map<char, int> nums;
        vector<char> rest(16);
        char buf[32];
        int i;
        nums.clear();
        rest.clear();
        for (i = 0;i < secret.length();++i) {
            if (secret[i] == guess[i]) {
                ++bulls;
            } else {
                nums[secret[i]] = nums[secret[i]] + 1;
                rest.push_back(guess[i]);
            }
        }
        if (nums.size() != 0) {
            for (char &c: rest) {
                if (nums[c] > 0) {
                    cows += 1;
                    nums[c] = nums[c]-1;
                }
            }
        }
        sprintf(buf, "%dA%dB",bulls, cows);
        return string(buf);
    }
};


int main()
{
    Solution s;
    s.getHint("66874848", "88457415");
    return 0;
}
