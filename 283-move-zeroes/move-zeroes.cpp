class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.empty()){
            return;
        }
        else if (nums.size()==1){
            return;
        }
        else{
            int temp = 0;
            int i = 0;
            for(int j=0; j<nums.size(); j++){
               

                if(nums[j] != 0 ){
                    temp = nums[j];
                    nums[j] = nums [i];
                    nums[i] = temp;
                    i++;
                }
            }
        }
return;
    }
};