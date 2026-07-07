class Solution {
  public:
    int arraySum(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        for(int i = 0; i<= n-1; i++){
            sum += arr[i];
        }
        return sum;
    }
};