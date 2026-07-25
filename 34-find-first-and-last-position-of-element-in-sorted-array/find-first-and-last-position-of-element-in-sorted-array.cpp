class Solution {
public:
int firstOccurance (vector<int>arr, int n , int key ){
    int s = 0 , e = n-1 , mid = s + (e-s)/2 ,ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid; 
            e = mid - 1;
        }
        else if (key < arr[mid]){
            e = mid - 1; 
        }
        else if ( key > arr[mid]){
            s = mid + 1; 
        }
        mid = s + (e-s)/2;
    }
    return ans;

}
int lastOccurance (vector<int>arr, int n , int key ){
    int s = 0 , e = n-1 , mid = s + (e-s)/2, ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid; 
            s = mid + 1;
        }
        else if (key < arr[mid]){
            e = mid - 1; 
        }
        else if ( key > arr[mid]){
            s = mid + 1; 
        }
        mid = s + (e-s)/2;
    }
    return ans;

}
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>res;
        int n = nums.size();
        res.push_back(firstOccurance(nums , n , target));
        res.push_back(lastOccurance(nums , n , target));
        return res;
    }
};