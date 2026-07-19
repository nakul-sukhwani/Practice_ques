class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(),nums.end());

        for(int i = 0; i< size ; i++){
            if(nums[i] == nums[i+1]){
                return nums[i]; 
            }
            else {
                continue; 
            }
        }
        return nums[nums.size() - 1];
    }
};