#include <string>
#include <vector>
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

class Solution {
public:
    bool reorderedPowerOf2(int n) {
        bool r = false;
        int num1[] = {1, 2, 4, 8};
        string num2[] = {"16", "32", "64"};
        string num3[] = {"128", "256", "512"};
        string num4[] = {"1024", "2048", "4096", "8192"};
        string num5[] = {"16384", "32768", "65536"};
        string num6[] = {"131072", "262144", "524288"};
        string num7[] = {"1048576", "2097152", "4194304", "8388608"};
        string num8[] = {"16777216", "33554432", "67108864"};
        string num9[] = {"134217728", "268435456", "536870912"};
        string num10[] = {"1073741824", "2147483648"};
        if (n < 10) {
            for (auto i : num1) {
                if (i == n) {
                    r = true;
                    break;
                }
            }
        } else if (n < 100) {
            for (auto i : num2) {
                if (equal(i, n)) {
                    r = true;
                    break;
                }
            }
        } else if (n < 1000) {
            for (auto i : num3) {
                if (equal(i, n)) {
                    r = true;
                    break;
                }
            }
        } else if (n < 10000) {
            for (auto i : num4) {
                if (equal(i, n)) {
                    r = true;
                    break;
                }
            }
        } else if (n < 100000) {
            for (auto i : num5) {
                if (equal(i, n)) {
                    r = true;
                    break;
                }
            }
        } else if (n < 1000000) {
            for (auto i : num6) {
                if (equal(i, n)) {
                    r = true;
                    break;
                }
            }
        } else if (n < 10000000) {
            for (auto i : num7) {
                if (equal(i, n)) {
                    r = true;
                    break;
                }
            }
        } else if (n < 100000000) {
            for (auto i : num8) {
                if (equal(i, n)) {
                    r = true;
                    break;
                }
            }
        } else if (n < 1000000000) {
            for (auto i : num9) {
                if (equal(i, n)) {
                    r = true;
                    break;
                }
            }
        } else if (n < 10000000000) {
            for (auto i : num10) {
                if (equal(i, n)) {
                    r = true;
                    break;
                }
            }
        } else {
            r = false;
        }
        return r;
    }

    bool equal(string s, int n) {
        char num[16];
        char c_num[16];
        int i;
        int j;
        int len = 0;
        int cnt = 0;
        while(n > 0) {
            num[len] = (char)(n%10 + '0');
            n /= 10;
            ++len;
        }
        for (i = 0;i < s.length();++i) {
            c_num[i] = s[i];
        }
        for (i = 0;i < len;++i) {
            char p = num[i];
            for (j = 0;j < len;++j) {
                if (p == c_num[j]) {
                    ++cnt;
                    c_num[j] = (char)0xFF;
                    break;
                }
            }
        }
        return cnt == len;
    }
};


int main()
{
    Solution s;
    bool r = s.reorderedPowerOf2(134221778);
    int i;
    for (int i = 0;i < 32;++i) {
        // cout << pow(2,i) << endl;
        printf("%.0lf\n", pow(2,i));
    }
    string str1[5] = {"","2","",""};
    return 0;
}
