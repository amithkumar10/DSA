class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int temp =0;
        for(int i =0; i<nums.size(); i++){
          temp = nums[i]*nums[i];
          nums[i]=temp;
        }

        sort(nums.begin(), nums.end());

        return nums;
    }
};