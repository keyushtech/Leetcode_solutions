// Title: Product of Array Except Self
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/product-of-array-except-self/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(n,1);
        vector<int> suffix(n,1);
        vector<int> finalans(n,1);
        prefix[0] = 1;
        suffix[nums.size()-1] = 1;
        for (int i =1; i<nums.size();i++){
            prefix[i] = prefix[i-1]*nums[i-1];
        }
        for (int i =nums.size()-2; i>=0;i--){
            suffix[i] = suffix[i+1]*nums[i+1];
        }
        for (int i =0; i<nums.size();i++){
            finalans[i] = prefix[i]*suffix[i];
        }
        return finalans;
    }
        int n = nums.size();
};
