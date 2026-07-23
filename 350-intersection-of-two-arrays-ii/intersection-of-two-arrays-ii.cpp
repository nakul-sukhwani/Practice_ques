class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans;
    int n = nums1.size();
    int m = nums2.size();
     for ( int i = 0 ; i < n ; i++){
        int ele = nums1[i];
     for( int j = 0 ; j < m ; j++){
        if(ele == nums2[j]){
            ans.push_back(ele);
            nums2[j] = INT_MIN;
            break;
        }
     }
     }   
     return ans; 
    }
};