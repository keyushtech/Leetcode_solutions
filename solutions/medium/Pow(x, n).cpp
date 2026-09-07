// Title: Pow(x, n)
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/pow(x,-n)/

                }
                power = power/2;
                x = x*x;
            }
        }else if (power<0){
            while (power<0){
                    ans = ans*x;
                if (power%2==1){
            while (power>0){
        if (power>0){
        long power = n;
        double ans = 1;
class Solution {
public:
    double myPow(double x, int n) {
        if (x==0){
            return 0;
        }else if (n==0){
            return 1;
        }
