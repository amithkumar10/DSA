class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefixSum(n + 1, 0);

       
        for (int i = 0; i < n; ++i) {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }

        int count = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                int sum = prefixSum[j + 1] - prefixSum[i];
                if (sum == k) {
                    count++;
                }
            }
        }

        return count;
    }
};
