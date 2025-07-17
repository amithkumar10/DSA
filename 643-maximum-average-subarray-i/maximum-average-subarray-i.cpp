class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int currentSum = 0;
        int n = nums.size();

        for (int i = 0; i < k; i++) {
            currentSum += nums[i];
        }

        int maxSum = currentSum;

        for (int i = 1; i <= n - k; i++) {
            currentSum = currentSum - nums[i - 1] + nums[i + k - 1];

            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }
        return static_cast<double>(maxSum) / k;
        ;
    }
};