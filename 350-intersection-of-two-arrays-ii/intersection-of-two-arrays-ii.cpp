class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int m = nums2.size();

        vector<int> ans;

        int i = 0 , j = 0;

        while( i<n && j<m){

            int ele = nums1[i];

            if( nums1[i] < nums2[j]){
                i++;
            }
            else if ( nums1[i] == nums2[j] ){
                ans.push_back(ele);
                i++ , j++;
            }

            else if( nums1[i] > nums2[j] ){
                j++;
            }
        }
        return ans;
    }
};