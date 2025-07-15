class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.empty()){
            return 0;
        }

        sort(nums.begin(), nums.end()); 

       vector<vector<int>> result;
       int closestSum = nums[0] + nums[1] + nums[2];


       for(int i =0; i<nums.size(); i++){
        int l = i+1; 
        int r = nums.size() -1;
       
        while(l<r){
            int sum = nums[i] + nums[l] + nums[r];
            int diff = abs(target - sum);
            int curClosDiff = abs(target - closestSum);

            if(diff < curClosDiff){
                closestSum = sum;
            }
            if(sum<target){
                l++;
            }
            else{
                r--;
            }

        }
       }
        
       return closestSum;
    }
};