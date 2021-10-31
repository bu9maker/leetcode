#include <set>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string s1("qwertyuiop");
        string s2("asdfghjkl");
        string s3("zxcvbnm");
        set<char> c1;
        set<char> c2;
        set<char> c3;
        vector<string> res(16);
        c1.clear();
        c2.clear();
        c3.clear();
        res.clear();
        
        for (auto &c :s1) {
            c1.insert(c);
            c1.insert((char)(c-32));
        }
        for (auto &c :s2) {
            c2.insert(c);
            c2.insert((char)(c-32));
        }
        for (auto &c :s3) {
            c3.insert(c);
            c3.insert((char)(c-32));
        }
        for (auto &str:words) {
            bool flag = true;
            set<char> *ptr = NULL;
            int k = 0;
            char c = str[0];
            
            for (auto &c :str) {
                if (ptr == NULL) {
                    if (c1.find(c) != c1.end()) {
                        ptr = &c1;
                    } else if (c2.find(c) != c2.end()) {
                        ptr = &c2;
                    } else {
                        ptr = &c3;
                    }
                } else {
                    if ((*ptr).find(c) == (*ptr).end()) {
                        flag = false;
                        break;
                    }
                }
            }
            if (flag) {
                res.push_back(str);
            }
        }
        return res;
    }
};

int main()
{
    vector<string> ss;
    Solution s;
    ss.clear();
    ss.push_back("Hello");
    ss.push_back("Alaska");
    s.findWords(ss);
    return 0;
}
