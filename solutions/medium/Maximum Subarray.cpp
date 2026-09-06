// Title: Maximum Subarray
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur_sum = 0, max_sum = INT_MIN;
        for (int i : nums){
            cur_sum += i;
            max_sum = max(cur_sum,max_sum);
            if (cur_sum<0){
                cur_sum = 0;
            }
        }
    }
        return max_sum;
};
