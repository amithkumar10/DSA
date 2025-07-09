class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>prefixSum;
        int n = nums.size();
        prefixSum.resize(n+1, 0);
        
        for(int i =0; i<n; i++){
            prefixSum[i+1] = prefixSum[i] + nums[i]; 
        }

        for(int i = 0; i<n; i++){
            int prefixSumL = prefixSum[i];
            int prefixSumR = prefixSum[n] - prefixSum[i+1];

            if(prefixSumL == prefixSumR){
                return i;
            }
        }
return -1;
    }
};