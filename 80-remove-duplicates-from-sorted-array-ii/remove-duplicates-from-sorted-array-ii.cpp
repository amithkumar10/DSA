class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
          if(nums.empty()){
        return 0;
       }
      
       int n = nums.size();
       
       if(nums.size()<=2){
         return n;
       }
        int i=2;
       for(int j = 2; j<nums.size(); j++){
        if(nums[j] != nums[i-2]){
            nums[i]=nums[j];
             i++;
        }
       }

       return i;
    }
};