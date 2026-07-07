class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        int n = arr.size();
        if (n == 0) return {}; 
        sort(arr.begin(), arr.end());
        int min = arr[0];
        int max = arr[n - 1]; 
        return {min, max}; 
    }
};