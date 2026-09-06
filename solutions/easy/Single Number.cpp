// Title: Single Number
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/single-number/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xor2 = 0;
        for (int i=0;i<nums.size();i++){
            
        return xor2;

            xor2 = xor2^nums[i];
        }
    }
};
