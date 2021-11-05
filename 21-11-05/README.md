# 题解

动态规划

dp[k]代表以k结尾的最大长度，

有状态转移方程dp[k]=dp[k-diff]+1

求出dp中所有k对应v的max即可