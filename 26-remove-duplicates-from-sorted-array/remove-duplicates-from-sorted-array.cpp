class Solution {
public:
int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    int low = 0, high = 1;
        while(high<n){
            if(n==0){
                return 0;
            }
            else if(nums[low]==nums[high]){
                high++;
            }
            else{
                low++;
                nums[low]=nums[high];
                high++;
            }

         }
         return low + 1;

    }
};